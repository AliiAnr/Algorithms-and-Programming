#include <iostream>

using namespace std;

int main(){
	int array[100], jumlah;
	
	cout<<"masukkan jumlah: ";
	cin>>jumlah;
	cout<<"daftar pasangan angka"<<endl;
	for(int i=1; i<jumlah; i++){
		array[i]=i;
		for (int j=1; j<jumlah; j++){
			array[j]=j;
			if(array[i]+array[j]==jumlah){
				cout<<array[i]<<" + "<<array[j]<<endl;
			}
		}
	}
	return 0;
}