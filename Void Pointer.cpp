#include <iostream>
using namespace std;

void tambah (int *angka){ //membuat prosedur pointer
*angka += 20;
}

int  main () {
int nilai = 10;
cout<< "nilai awal = "<<nilai<<endl;
tambah (&nilai); //memasukkan alamat variabel nilai pada procedure tambah
cout<< "Nilai setelah diproses = "<<nilai; //meanampilkan nilai setelah dipangiilnya prosedur tambah
}
