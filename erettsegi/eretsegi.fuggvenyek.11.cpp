#include <iostream>

using namespace std;

int interval ( int* a, int n )
{
	int r=0;
	for(int i=0;i<n;i++){
		if((a[i]<=a[0]&&a[i]>=a[n-1])||(a[i]>=a[0]&&a[i]<=a[n-1])){
			r++;
		}
	}
	return r;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<interval(a,n);
}
