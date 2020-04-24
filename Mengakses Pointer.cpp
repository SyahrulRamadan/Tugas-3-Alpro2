cara mengakses pointer dereferene itu dengan cara menambahkan tanda "&" pada variabel yang telah dideklarasikan sebelumnya contohnya seperti program di bawah ini
#include<iostream>
using namespace std;

int main() {
int a;
cout<<&a;
}*/

cara mengakses pointer referene itu dengan cara mendeklarasikan variabel dengan menambahkan tanda "*" pada suatu variabel kemudian rumuskan variabel yang telah ditambahkan tanda "*" dengan variabel lain yang ingin diketahui alamat data yang tersimpan pada memori, Contoh programnya seperti di bawah ini
#include <iostream>
using namespace std;

int main () {
int *p;
int a;
p=&a;
cout<<p;
}
