#include<iostream>
using namespace std;

int main() {
     int array [3][3]= { {2,4,6},{8,10,12},{14,16,18} };
     int k=0;
     int jumlahdus=9;

     cout<<"jumlah dus : "<<jumlahdus<<endl;
     cout<<" nomor dus : ";
     for (int i=0; i<3; i++) { 
           for (int j=0; j<3; j++) {
                 cout<<" "<<array[i][j];
           }
      }
      cout<<endl;
      for ( int i=0; i<3; i++) {
            for (int j=0; j<3; j++) {
                  cout<<"nomor dus ke-"<<k+1<<" = "<<array[i] [j]<<endl;
                   k+=1;
             }
      }
}
