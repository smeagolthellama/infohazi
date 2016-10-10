/*
 * eretttsegi.fuggvenyek.4.cpp
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

using namespace std;

void f(int n,int a[10],int &k){
	k=0;
	int any=0;
	for(int i=n-1;i>=0;i--){
		if(a[i]%2==0){
			any=1;
			k*=10;
			k+=a[i];
		}
	};
	if(any==0){
		k=-1;
	}
	
};

int main(int argc, char **argv)
{
	int n, a[10], k,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	f(n,a,k);
	cout<<k;
	return 0;
}

