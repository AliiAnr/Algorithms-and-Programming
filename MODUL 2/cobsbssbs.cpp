#include <iostream>
#include <cmath>
using namespace std;

int main (){
   int jum;
   
   cout<< " Masukan Jumlah Baris : ";
   cin >> jum;
   
   int temp = jum;
   for (int i = 1; i<=jum; i++){
      int help = temp;
      for (int j = 1; j<=jum; j++){
         if (i==j){
            cout << 1 << " ";
         }
         else if (abs(help) == 2){
            cout << 0 << " ";
         }
         else{
            
         cout <<abs(help) << " ";
         }
         if (help == 1){
            help -=2;
         }
         help--;
      }
      cout << endl;
      temp--;
   }
}