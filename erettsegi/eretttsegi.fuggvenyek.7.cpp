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

int sub(int v[],int n,int a){
	int r;
	for(int i=0;i<n;i++){
		if(v[i]<a){
			r++;
		}
	}
	return r;
}

int main(int argc, char **argv)
{
	
	return 0;
}

