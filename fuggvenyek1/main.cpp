/*
I.
1. Adott egy n elemü egydimenziós tömb. Határozzátok meg és írjátok ki azoknak a legnagyobb számjegy összegű elemeknek a sorszámát, amelyek oszthatóak a számjegyei számával.
Oldd meg a feladatot úgy, hogy megírod, majd meghívod az alábbi függvényeket: tömb beolvasása állományból, tömb kiíratása képernyőre, egy szám számjegyeinek az összege, egy tömb legnagyobb elemének a meghatározása, egy szám számjegyeinek száma, egy szám egyenlő egy másik számmal vagy nem (a tömb egy adott elemére és a maximumra kell meghívni).
2. Írd le mit tudsz a formális paraméterekről, adj példát.
3. Cím szerinti paraméterátadás lényege, példa.
*/
#include <cmath>
#include <fstream>
#include <iostream>

using namespace std;

int i;

bool egyenlo(int a, int b)
{
	return (a == b);
}

void beolvas(int n, int* t, ifstream& f)
{
	for(i = 0; i < n; i++) {
		f >> t[i];
	}
};

void kiir(int n, int t[])
{
	for(i = 0; i < n; i++) {
		cout << t[i] << '\t';
	}
};

int szjszosz(int n)
{
	int r=0;
	while(n) {
		r += n % 10;
		n /= 10;
	}
	return r;
}

int szjsz(int n)
{
	int r;
	r = 0;
	while(n) {
		r++;
		n /= 10;
	}
	return r;
};

int max_i_t(int n, int* t)
{
	int b;
	b = 0;
	for(i = 0; i < n; i++) {
		if(t[i] > t[b]) {
			b = i;
		}
	}
	return b;

}

int main()
{
	int n;
	cin >> n;
	int t[n];
	ifstream f("in.txt");
	beolvas(n, t, f);
	int t0[n];
	for(i = 0; i < n; i++) {
		t0[i] = szjszosz(t[i]);
		cout<<t0[i]<<endl;
	}
	int m = max_i_t(n, t0);
	for(i = 0; i < n; i++) {
		if(szjszosz(t[i]) == t0[i] && t[i] % szjsz(t[i])) {
			cout << i << '\t';
		}
	}
	return 0;
}
