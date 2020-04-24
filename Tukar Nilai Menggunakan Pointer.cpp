#include <iostream>

using namespace std;
void tukar (int *x, int *y){
	int temp;
	temp = *x;
	*x=*y;
	*y=temp;
	}
int main (){
	int a,b;
	cout<<"Masukkan bil 1 = ";
	cin>>a;
	cout<<"Masukkan bil 2 = ";
	cin>>b;
	cout<<"Sebelum ditukar =\n"<<a<<endl<<b<<endl;
	tukar (&a,&b);
	cout<<"Setelah ditukar =\n";
	cout<<a<<endl;
	cout<<b;
}
