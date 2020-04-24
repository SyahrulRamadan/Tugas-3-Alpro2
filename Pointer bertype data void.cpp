#include <iostream>
using namespace std;

int main (){
	void *p; //mendeklarasikan pointer "p" dengan type data void
	int a=5;  //mendeklarasikan variabel a
	p=&a;  //merumuskan p = pointer a
	cout<<p;  //menampilkan alamat variabel a yang tertampung di pointer "p"
}
