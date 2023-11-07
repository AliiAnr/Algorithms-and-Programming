#include <iostream>
using namespace std;
int x=0;
struct pilihan{
	string nama[100];
	
	
}pemain;

void TambahPemain(){
	int jumlah, pilih;
	x++;
	cout<<"====TAMBAH PEMAIN===="<<endl<<endl;
	cout<<"Masukkan Jumlah Pemain"<<endl;
	cout<<">> "; cin>>jumlah; cout<<endl;
	for(x = 0;x<jumlah;x++){
		cout<<"Masukkan Nama Pemain ke-"<<x+1<<endl;
		cout<<">> ";
		cin.ignore();
		getline(cin,pemain.nama[x]);
		cout<<"Pemain Berhasil ditambah!"<<endl<<endl;	
	}
	cout<<jumlah<<" Pemain Berhasil Ditambah!";
	cout<<endl;
	cout<<"1. Tambah lagi"<<endl;
	cout<<"2. Kembali Ke Menu Utama"<<endl;
	cin>>pilih;
	switch (pilih){
		case 1 :
			cout<<"a";
			break;
		case 2 :
			system ("cls");
	}
}

void MulaiBermain(){
	
}




void utama(){
	int pilih;
	back:
	cout<<"Selamat datang di UNO card Counter! :)"<<endl;
	cout<<"Menu : "<<endl;
	cout<<"1. Tambah Pemain"<<endl;
	cout<<"2. Mulai Bermain"<<endl;
	cout<<"3. Quit"<<endl;
	cout<<">> "; cin>>pilih;
	system ("cls");
	switch (pilih){
		case 1 :
			TambahPemain();
			goto back;
			break;
		case 2 :
			MulaiBermain();
			goto back;
			break;
		case 3 :
			break;
	}
}


int main(){
	utama();
}