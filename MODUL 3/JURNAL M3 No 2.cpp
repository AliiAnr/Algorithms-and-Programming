#include <iostream>
using namespace std;

float matriks1(int matrx){
	cout<<"Masukkan nilai matriks 1"<<endl;
	float nilai[matrx][matrx];
        for (int a=0; a<=matrx-1; a++){
            for (int b=0; b<=matrx-1; b++){
            	cout<<"data["<<a<<"]["<<b<<"]: "; cin>>nilai[a][b];
			}
    	}
    	cout<<"Hasil input matriks"<<endl;
			cout<<"Matriks 1"<<endl;

    	for (int c=0; c<=matrx-1; c++){
    		cout<<"[";
            for (int d=0; d<=matrx-1; d++){
            	cout<<nilai[c][d]<<",";
			}
			cout<<"]";
			cout<<endl;
}
}
float matriks2(int matrx){
	cout<<"Masukkan nilai matriks 2"<<endl;
	float value[matrx][matrx];
        for (int a=0; a<=matrx-1; a++){
            for (int b=0; b<=matrx-1; b++){
            	cout<<"data["<<a<<"]["<<b<<"]: "; cin>>value[a][b];
			}
    	}
    	
    	cout<<"Matriks 2"<<endl;
    	for (int c=0; c<=matrx-1; c++){
            for (int d=0; d<=matrx-1; d++){
            	cout<<value[c][d]<<" ";
			}
			cout<<endl;
    	}
}
int main(){
	int matrx, x, c;
	cout<<"masukkan ordo matriks : ";cin>>matrx;cout<<endl;
    	cout<<endl;
			x=matriks1(matrx);
			cout<<x<<endl;
    
			c=matriks2(matrx);
			cout<<c<<endl;
    	
    	 
}
