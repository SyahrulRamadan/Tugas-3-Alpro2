#include<iostream>
using namespace std;

int main() {
int x; //mendeklarasikan variabel
int *pointer1; //mendeklarasikan pointer pertama
int **pointer2; //mendeklarasikan pointer kedua
x = 20; // memasukkan nilai pada variabel
pointer1 = &x; //menyimpan alamat variabel x pada pointe pertama
pointer2 = &pointer1;//menyimpan alamat pointer pertama pada pointer kedua
cout<<"Nilai dari x = "<<x<<endl; //menampilkan nilai x
cout<<"Nilai dari *pointer1 = "<<*pointer1<<endl; //menampilkan nilai *pointer1
cout<<"Nilai dari **pointer2 = "<<**pointer2<<endl; //menampilkan nilai **pointer2
cout<<pointer1<<endl; //menampilkan alamat yang tersimpan pada pointer pertama
cout<<pointer2<<endl; //menampilkan alamat yang tersimpan pada pointer kedua
}
