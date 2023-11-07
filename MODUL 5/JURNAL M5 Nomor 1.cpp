#include<iostream>
#include <iomanip> 
 
using namespace std;

int d= 0;
struct data{
	string nama[100];
	string nim[100];
	string tgl[100];
}pinjam;

struct paper{
	string judul[100][100];
	string buku[100][100];
	string ID[100][100];
}book;

struct booklist{
    string judul[100][100];
    string ID[100][100];
    string genre[2][14]={{"T4","H1","K9","F7","R3","L0","A2","H3","S7","D1","XX"},
                        {"Thriller","Horror","Komedi","Fantasi","Romantis","Ilmiah","Petualang","Sejarah","Sastra","Dokumentasi","Kosong"}};
    string jenis[2][14]={{"NV","KM","EN","DO","BI","KS","XX"},
                        {"Novel","Komik","Ensiklopedia","Dongeng","Biografi","Kamus","Kosong"}};
    string penulis[2][14]={{"FD","FI","NA","SM","KD","XX"},
                        {"Firdaus","Fajar Islam","Nadya A.","Surgi Mukti","Kasandi","Kosong"}};
    string penerbit[2][14]={{"AN","GR","ER","DE","XX"},
                        {"ANDI","GRAMEDIA","ERLANGGA","DEEPUBLIS","Kosong"}};
    string tahun[2][14]={{"11","12","13","14","15","16","17","18","19","20","21","22","28","XX"},
                        {"MMXI","MMXII","MMXIII","MMXIV","MMXV","MMXVI","MMXVII","MMXVIII","MMXIX","MMXX","MMXXI","MMXXII","MMXXVIII","Kosong"}};
}listbook;

int umur(string date){
	string day; day += date[0]; day += date[1];
	int hari = stoi(day);
	string month; month += date[3]; month += date [4];
	int bulan = stoi(month);
	string year ; year += date[6];  year += date[7];  year += date[8];  year += date[9];
	int tahun = stoi (year);
	int _year;
	int day_now = 26, month_now = 06, year_now = 2022;
	
	if((year_now>tahun) && (month_now>=bulan) &&  (day_now>=hari)){
		_year =  year_now - tahun;
	}
	else if((year_now>tahun) && (month_now<=bulan) && (day_now>=hari)){
		_year = (year_now - tahun)-1;
	}
	else if((year_now>tahun) && (month_now<=bulan) && (day_now<=hari)){
		_year = (year_now - tahun) - 1;
	}
	else if((year_now>tahun) && (month_now>=bulan) && (day_now<=hari)){
		_year = year_now - tahun;
	}
	
	return _year;	
}

int carinama(string fullname, string nickname){
	string findname; int cek = 0;
	for(int i=0; i<fullname.length();i++){
		findname = "";
		for(int j = 0; j<nickname.length(); j++){
			findname += fullname[j+i];
		}
		
		if(nickname==findname){
			cek+=1;
		}
	}
	return cek;
}

void tambahdata(){
	int j=0;
	char t;
	d++;
	cout<<"Mahasiswa ke - "<<d<<endl;
	cout<<"Nama Mahasiswa : ";
	if(d==d){
		getline(cin,pinjam.nama[d-1]);
		}
	getline(cin,pinjam.nama[d-1]);
	cout<<"NIM : ";
	getline(cin,pinjam.nim[d-1]);
	cout<<"Tanggal Lahir (dd/mm/yy): ";
	cin>>pinjam.tgl[d-1];
	
	back:
	j++;
	cout<<"\t Buku ke - "<<j<<endl;
	cout<<"\t Judul Buku : ";
	if(d==d){
		getline(cin,book.judul[d-1][j-1]);
	}
	getline(cin,book.judul[d-1][j-1]);
	cout<<"\t ID Buku : ";
	getline(cin,book.ID[d-1][j-1]);
	cout<<"Tambah buku lagi ? (Y/N) : ";cin>>t;
	if(t=='y'||t=='Y'){
		goto back;
	}
	else{
		cout<<endl;
		system ("pause");
		system ("cls");
	}
}

void datapinjam(){
	cout<<"==== Mahasiswa yang meminjam buku ===="<<endl;
	for(int i=0;i<d;i++){
		cout<<i+1<<". "<<pinjam.nama[i]<<endl;
		for(int j=0;j<100;j++){
			if(book.judul[i][j]!=""){
			cout<<"  ===>"<<book.judul[i][j]<<endl;
			}
		}
		
	}
	system("pause");
	system("cls");
}



void cekdata(){
	string kata, input;
	
	cout<<"Input Nama : ";
	if(d==d){
		getline(cin,input);
	}
		getline(cin,input);
	
	for(int i=0;i<100;i++){
		string simpan = pinjam.nama[i];
		int cari = carinama(simpan,input);
		if(cari>0){
			cout<<"Data "<<input<<" Ditemukan : "<<endl;
			cout<<"Nama : "<<pinjam.nama[i]<<endl;
			cout<<"NIM  : "<<pinjam.nim[i]<<endl;
			cout<<"TTl  : "<<pinjam.tgl[i]<<endl;
			string tgl=pinjam.tgl[i];
			cout<<"Umur : "<<umur(tgl)<<endl;
		}	
	}
	system("pause");
	system("cls");
}

void cetakkartu(){
	string kata, input;
	
	cout<<"Input Nama : ";
	if(d==d){
		getline(cin,input);
	}
		getline(cin,input);
	
	for(int i=0;i<100;i++){
		string simpan = pinjam.nama[i];
		int cari = carinama(simpan,input);
		if(cari>0){
			cout<<setw(69)<<"PERPUSTAKAAN TEKNIK"<<endl;
			cout<<setw(69)<<"Universitas Mataram"<<endl;
			cout<<setw(73)<<"JL. Majapahit No. 62 Mataram"<<endl;
			cout<<"======================================================================================================================="<<endl;
			cout<<"Nama : "<<pinjam.nama[i];
			cout<<setw(85)<<"TTl : "<<pinjam.tgl[i]<<endl;
			cout<<"NIM  : "<<pinjam.nim[i];
			string tgl=pinjam.tgl[i];
			cout<<setw(95)<<"Umur : "<<umur(tgl)<<endl;
		 	cout<<"......................................................................................................................."<<endl;
            cout<<"|No.|          Judul           |    Genre    |    Jenis Buku    |    Penulis    |    Penerbit    |    Tahun Terbit    |"<<endl;
            cout<<"......................................................................................................................."<<endl;
			for (int f = 0; f < 100; f++){
                        string genre = "" ; genre += (book.ID[i][f])[0];genre += (book.ID[i][f])[1];
                        string jenis = ""; jenis += (book.ID[i][f])[2];jenis += (book.ID[i][f])[3];
                        string penulis = ""; penulis += (book.ID[i][f])[4];penulis += (book.ID[i][f])[5];
                        string terbit = ""; terbit += (book.ID[i][f])[6];terbit += (book.ID[i][f])[7];
                        string year = ""; year += (book.ID[i][f])[8];year += (book.ID[i][f])[9];
                        for (int g = 0; g < 14; g++){
                            if (genre==listbook.genre[0][g]){
                                genre = listbook.genre[1][g];
                            }
                            if (jenis==listbook.jenis[0][g]){
                                jenis = listbook.jenis[1][g];
                            }
                            if (penulis==listbook.penulis[0][g]){
                                penulis = listbook.penulis[1][g];
                            }
                            if (terbit==listbook.penerbit[0][g]){
                                terbit = listbook.penerbit[1][g];
                            }
                            if (year==listbook.tahun[0][g]){
                                year = listbook.tahun[1][g];
                            }   
                        }
                        if (book.judul[i][f]!=""){
                            string simpanjudul = book.judul[i][f];
                            cout<<"| "<<f+1<<" | "<<setiosflags(ios::right)<<setw(24)<<book.judul[i][f];
							cout<<" | "<<setiosflags(ios::right)<<setw(11)<<genre;
                            cout<<" | "<<setiosflags(ios::right)<<setw(16)<<jenis;
							cout<<" | "<<setiosflags(ios::right)<<setw(13)<<penulis;
                            cout<<" | "<<setiosflags(ios::right)<<setw(14)<<terbit;
							cout<<" | "<<setiosflags(ios::right)<<setw(18)<<year<<" | "<<endl;
                            cout<<"......................................................................................................................."<<endl;
                        }
                    }
                    cout<<endl<<setw(40)<<"Petugas Perpustakaan"<<setw(69)<<"Kepala Penanggung Jawab\n\n\n\n\n";
                    cout<<setw(42)<<"Nuzhairil Arsanurrahman"<<setw(61)<<"Shafa Asyari Ramadhan"<<endl<<endl;   
                }      
        }
         system("pause");
    system("cls");
    }

void menu(){
	int pilih;
	menu:
	cout<<"=== MENU PROGRAM ==="<<endl;
	cout<<"1. Tambah data"<<endl;
	cout<<"2. Data Mahasiswa meminjam buku"<<endl;
	cout<<"3. Cek Data"<<endl;
	cout<<"4. Cetak Kartu"<<endl;
	cout<<"5. Exit"<<endl;
	cout<<"Masukkan pilihan: ";cin>>pilih;
	system("cls");
	switch (pilih){
		case 1 :
			tambahdata();
			goto menu;
			break;
		
		case 2 :
			datapinjam();
			goto menu;
			break;
			
		case 3 :
			cekdata();
			goto menu;
			break;
			
		case 4 :
			cetakkartu();
			goto menu;
			break;
		
		case 5 :
			cout<<"Terimakasih :)";
			break;	
	}

}


int main(){
	menu();
	return 0;
}

