#include <iostream>
using namespace std;
int main(){
int i,a,b,c,n,x,z,fibo,total1=0,total2=0,total3=0;
cout<<"masukkan nilai akhir(x)\t\t= "; cin>>a;
cout<<"masukkan nilai selisih(y)\t= "; cin>>b;
cout<<"masukkann banyak barisan(n)\t= "; cin>>c;
n=a+(c-1)*b;
cout<<"\na. Seluruh bilangan aritmatika\t: ";
	for(i=n;i>=a ;i-=b){
		cout<<i<<" ";
		total1+=i;
	}
	cout<<"\njumlah\t: "<<total1<<endl;
	cout<<"\nb. Seluruh bilangan prima\t: ";		
	for(x=n; x>=2; x-=b){
		fibo=0;
	 	for(i=2; i<x; i++)
		 	if(x%i==0){
	 		fibo=1;
	 		}
			if(fibo==0){
	 		cout<<x<<" ";
			total2+=x;
	 		}
	}
	cout<<"\njumlah\t : "<<total2;
	cout<<endl;
	cout<<"\nc. Seluruh bilangan fibonacci\t: ";
	for(x=n; x>=a; x-=b){
		int f1=0;
		int f2=1;
		for(int j=1; j<=x; j++){
		 z=f1+f2;
		 f1=f2;
		 f2=z;
		 	if(z==x){
		 		cout<<z<<" ";
		 		total3+=z;
		 		if(z==1){
		 			cout<<z<<" ";
		 			total3+=z;
				}
			}
		}
 	}
cout<<"\njumlah\t: "<<total3<<endl;
return 0;
}
