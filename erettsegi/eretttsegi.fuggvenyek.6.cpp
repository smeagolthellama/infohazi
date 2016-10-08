/*
 * eretttsegi.fuggvenyek.6.cpp
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
#include <cmath>

bool isprime(int n){

	if(n<2){
		return false;
	}
	int o=2,prim=1;
	while(o<sqrt(n)&&prim==1){
		if(n%o==0){
			prim=0;

		}
		o++;
	}

	return prim;

}

void sub(int n,int &a,int &b){
	a=n;b=n;int m=n;
	while(a==n && m){
		m--;
		if (isprime(m)){
			a=m;
		}
	}
	while(b==n && m){
		m--;
		if(isprime(m)){
			b=m;
		}
	}
}

int main(int argc, char **argv)
{
	int n;
	std::cin>>n;
	int a,b;
	sub(n,a,b);
	std::cout<<a<<std::endl<<b<<std::endl;
	return 0;

}
