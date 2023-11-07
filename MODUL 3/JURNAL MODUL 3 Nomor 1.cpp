#include <iostream>
 
using namespace std;
 
int main()
{
  cout << "##  Program C++ Konversi Desimal ke Biner ##" << endl;
  cout << "============================================" << endl;
  cout << endl;
 
  int a[100], n, i, j;
 
  cout << "Input angka desimal: ";
  cin >> n;
 
 if(n!=0){
  for(i=0; n>0; i++){
    a[i] = n%2;
    n = n/2;
  }
 
  cout << "Angka binernya adalah: ";
 
  for(i=i-1 ;i>=0 ;i--) {
    cout << a[i];
  }
  cout << endl;
}
else{
	cout<<"Nilai tidak valid !!!";
	cout<<endl;
}
  cout<<"Input angka biner: ";cin>>j;
 
  return 0;
}