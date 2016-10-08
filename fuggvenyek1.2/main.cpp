/*
 * II.
 * 1. Adott egy n elemü egydimenziós tömb. Határozzátok meg és írjátok ki azokat a prímszámokat, amelyeknek van középső számjegyük és az páros.
Oldd meg a feladatot úgy, hogy megírod, majd meghívod az alábbi függvényeket: tömb beolvasása billentyűzetről, tömb kiíratása állományba, egy szám számjegyeinek száma, egy szám középső számjegye (ismerve a számjegyek számát), egy szám páros-e vagy nem (a tömb egy adott elemére és a maximumra kell meghívni), egy szám prím-e vagy nem.
 * */
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int i;

void be(int n, int* t)
{
	for(i = 0; i < n; i++) {
		cin >> t[i];
	}
}

void ki(int n, int* t , ofstream& g)
{
	for(i = 0; i < n; i++) {
		g << t[i] << '\t';
	}
}

int szjsz(int n)
{
	int r = 0;
	while(n) {
		n /= 10;
		r++;
	}
	return r;
}

int szkszj(int n)
{
	if(szjsz(n) % 2 == 0) {
		return 100;
	} else {
		int s = szjsz(n);
		s /= 2;
		for(i = 0; i < s; i++) {
			n /= 10;
		}
		return n % 10;
	}
}

bool isprime(int n)
{
	if(n < 2) {
		return 0;
	}
	if(n == 2) {
		return 1;
	}
	if(n % 2 == 0) {
		return 0;
	}
	int o = 3;
	float x = sqrt(n);
//	cout<<"\ndebuging ?" <<n <<":" << x << " ";
	while(((float) o) <= x) {
//		cout<<"\ndebuging ? isprime : "<<o <<" " ;
		if(n % o == 0) {
//			cout<<"\ndebuging ? isprime : in if: "<<o << " ";
			return 0;
		}
		o++;
	}
	return 1;
}

bool paros(int n)
{
	return(n % 2 == 0);
}

int main()
{
	int n;
	cin >> n;
	int t[n];
	be(n, t);
//	cerr << "eleg";
	for(int j = 0; j < n; j++) {
		if(isprime(t[j])) {

			if(szkszj(t[j]) != 100) {
				bool reply = paros(szkszj(t[j]));
				//	cerr << t[j]<<  "--" << reply;
				if(reply) {
					cout << t[j] << '\t';
				}
			}
		}
	}
	cout << endl;
}




