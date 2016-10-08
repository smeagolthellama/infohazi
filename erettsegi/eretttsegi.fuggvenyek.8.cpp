/*
 * eretttsegi.fuggvenyek.7.cpp
 * 
 * Copyright 2016 mark <mark@pippin>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
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

int minpos;

int minimum(int n, int a[100])
{
	int i, mini = a[0];
	minpos = 0;
	for(i = 0; i < n; i++) {
		if(a[i] < mini) {
			mini = a[i];
			minpos = i;
		}
	}
	return mini;
}

void rendez(int n, int a[100])
{
	int i;
	for(i = 0; i < n; i++) {
		int b[100];
		for(int j = i; j < n; j++) {
			b[j - i] = a[j];
		}
		int tmp = a[i];
		a[i] = minimum(n - i, b);
		a[minpos + i] = tmp;
	}
	for(i = 0; i < n; i++) {
		cout << a[i] << '\t';
	}
}

int * sub(int n,int m,int a[],int b[]){
	rendez(n,a);
	rendez(m,b);
	int t[n+m];
	int i=0,j=0,k=0;
	while(i<n || j<m){
		for(;a[i]>b[j] && i<n;i++,k++){
			t[k]=a[i];
		}
		for(;a[i]<b[j] && j<m;j++,k++){
			t[k]=b[j];
		}
	}
	return t;
}

int main(int argc, char **argv)
{
	
	return 0;
}

