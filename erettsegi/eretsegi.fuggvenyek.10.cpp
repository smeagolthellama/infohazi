#include <iostream>
#include <fstream>

using namespace std;

void sterge ( int* v, int& n, int i, int j )
{
	int k;
	
	for ( k = i; k < j; k++ ) {
		cout << "debug: ";
		
		for ( int i = 0; i < n; i++ ) {
			cout << v[i] << '\t';
		}
		
		cout << endl << k << endl;
		
		for ( int i2 = i; i2 < n; i2++ ) {
			v[i2] = v[i2 + 1];
		}
		
		n--;
	}
}

int main()
{
	ifstream f ( "numere.in" );
	int n;
	f >> n;
	int v[n];
	
	for ( int i = 0; i < n; i++ ) {
		f >> v[i];
	}
	
	int i, j;
	
	for ( i = 0; i < n; i++ ) {
		if ( v[i] == v[i + 1] ) {
			for ( j = i; v[i] == v[j]; j++ );
			
			sterge ( v, n, i, j );
		}
		
	}
	
	for ( i = 0; i < n; i++ ) {
		cout << v[i] << ' ';
	}
	
	f.close();
	return 0;
}
