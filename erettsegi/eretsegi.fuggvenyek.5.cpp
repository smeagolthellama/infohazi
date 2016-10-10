/*
 * eretttsegi.fuggvenyek.5.cpp
 *
 * Copyright 2016 mark <mark@pippin>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */


#include <iostream>
//#define debug 1

using namespace std;

int cif ( int a, int b )
{
	int retval = 0x000;
	
	while ( a ) {
		if ( a % 10 == b ) {
			retval++;
		}
		
		a /= 10;
	}
	
	return retval;
}

int main ( int argc, char** argv )
{
	int n, t[10];
	cin >> n;
	
	for ( int i = 0; i < 10; i++ ) {
		t[i] = cif ( n, i );
	}
	
	int x = 0, y = -1;
	
	for ( int i = 0; i < 10 && x < 2; i++ ) {
		if ( t[i] % 2 != 0 ) {
			x++;
			y = i;
		}
	}
	
	if ( x > 1 ) {
#ifdef debug
		cout << "x>1\n";
#endif
		cout << 0;
		return 0;
	}
	
	n = 0;
	int i;
	
	for ( i = 0; i < 10; i++ ) {
		if ( i != y && t[i] != 0 ) {
			for ( int j = 0; j < t[i] / 2; j++ ) {
				n *= 10;
				n += i;
			}
			
#ifdef debug
			cout << n << endl;
#endif
		}
	}
	
	if ( y > 0 ) {
		n *= 10;
		n += t[y];
#ifdef debug
		cout << "y is not -1\n";
#endif
	}
	
	for ( i = 9; i >= 0; i-- ) {
		if ( t[i] == 0 ) {
			continue;
		}
		
		n *= 10;
		n += i;
#ifdef debug
		cout << n << endl;
#endif
	}
	
	cout << n;
	return 0;
}

