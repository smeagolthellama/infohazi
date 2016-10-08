/*
 * eretttsegi.fuggvenyek.3.cpp
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

int suma(short int *v,int n,int i,int j){
	int retval=0;
	for(int k=0;k<n;k++){
		if(k<i||k>j){
			retval+=v[k];
		}
	}
	return retval;
}

int main(int argc, char **argv)
{
	int n;
	cin>>n;
	short int v[n];
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int i,j;
	cin>>i>>j;
	int x;
	x=suma(v,n,i,j);
	cout<<x;
	return 0;
}

