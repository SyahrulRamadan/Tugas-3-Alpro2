#include <iostream>

using namespace std;

int main (){
int n, sum=0, *jumlah;
cout<<"Masukkan batas = ";
cin>>n;
int a[n];
cout<<"Masukkan Bilangan = \n";
for(int i=0; i<n; i++){
	cin>>a[i];
	}
for(int i=0;i<n;i++){
	sum= sum + a[i];
	}
	jumlah=&sum;
	cout<<"Hasil dari penjumlahan bilangan = "<<*jumlah;
}
