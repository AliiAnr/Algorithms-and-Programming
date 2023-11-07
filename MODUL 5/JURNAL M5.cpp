#include<iostream>
#include<conio.h>
#include <string>
#include <iomanip> 
 
using namespace std;

int d= 0;
struct data{
	string nama[40];
	string nim[40];
	string tgl[40];
}pinjam;

struct Ceknama{
	string nam[40];
}name;

struct paper{
	string judul[100][100];
	string buku[100][100];
	string ID[100][100];
}book;

struct list{
	string genre[10]={"T4", ""};
};


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
		system ("pause");
		system ("cls");
	}
}

struct buku{
    string judul[100][100];
    string ID[100][100];
    string genre[2][11]={{"T4","H1","K9","F7","R3","L0","A2","H3","S7","D1","XX"},
                        {"Thriller","Horror","Komedi","Fantasi","Romantis","Ilmiah","Petualang","Sejarah","Sastra","Dokumentasi","Kosong"}};
    string jenis[2][11]={{"NV","KM","EN","DO","BI","KS","XX"},
                        {"Novel","Komik","Ensiklopedia","Dongeng","Biografi","Kamus","Kosong"}};
    string penulis[2][11]={{"FD","FI","NA","SM","KD","XX"},
                        {"Firdaus","Fajar Islam","Nadya A.","Surgi Mukti","Kasandi","Kosong"}};
    string penerbit[2][11]={{"AN","GR","ER","DE","XX"},
                        {"ANDI","GRAMEDIA","ERLANGGA","DEEPUBLIS","Kosong"}};
    string tahun[2][11]={{"11","12","13","14","15","16","17","18","19","20","XX"},
                        {"MMXI","MMXII","MMXIII","MMXIV","MMXV","MMXVI","MMXVII","MMXVIII","MMXIX","MMXX","Kosong"}};
}mhs;


int umur(string tgl){
        string hari; hari += tgl[0]; hari+= tgl[1];
        int hari1 = stoi(hari);
        string bulan; bulan += tgl[3];bulan+=tgl[4];
        int bulan1 = stoi(bulan);
        string tahun; tahun += tgl[6];tahun+=tgl[7];tahun+=tgl[8];tahun+=tgl[9];
        int tahun1 = stoi(tahun);
        int hari2=20; int bulan2=05; int tahun2=2022;
        int tahun3=0;
        if ((tahun2>tahun1)&&(hari2>=hari1)&&(bulan2>=bulan1)){
            tahun3=tahun2-tahun1;
        }else if ((tahun2>tahun1)&&(hari1>=hari2)&&(bulan1>=bulan2)){
            tahun3=(tahun2-tahun1)-1;
        }else if ((tahun2>tahun1)&&(hari2>=hari1)&&(bulan1>=bulan2)){
            tahun3=(tahun2-tahun1)-1;
        }else if ((tahun2>tahun1)&&(hari1>=hari2)&&(bulan2>=bulan1)){
            tahun3=tahun2-tahun1;
        }
        return tahun3;
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

void cekdata(int pilih){
	string carinama;
    cout<<"Input Nama : ";
    if (d==d){
        getline(cin,carinama);
    }
    getline(cin,carinama);
    for (int i = 0; i < 100; i++){
        pinjam.nama[i]; int k=1;
        int a=pinjam.nama[i].length();
        for (int j = 0; j < a; j++){
            (pinjam.nama[i])[j];
            if ((pinjam.nama[i])[j]==' '){
                k+=1;
            }
        }
        string katabaru[k]; int l=-1;
        for (int m = 0; m < k; m++){
            for (int n = l+1; n < a; n++){
                katabaru[m]; (pinjam.nama[i])[n];
                if ((pinjam.nama[i])[n]!=' '){
                    katabaru[m]+=(pinjam.nama[i])[n];
                }else if((pinjam.nama[i])[n]==' '){
                    l=n;
                    break;
                }
            }
        }
        string simpantanggal = pinjam.tgl[i];
        if (pilih==3){
            for (int p = 0; p < k; p++){
                if ((carinama==katabaru[p])||(carinama==pinjam.nama[i])){
                    cout<<"Data "<<carinama<<" Ditemukan : "<<endl;
                    cout<<"Nama\t: "<<pinjam.nama[i]<<endl;
                    cout<<"NIM\t: "<<pinjam.nim[i]<<endl;
                    cout<<"TTL\t: "<<pinjam.tgl[i]<<endl;
                    cout<<"Umur\t: "<<umur(simpantanggal)<<endl;
                } 
            }
        }
        else if (pilih==4){
            for (int p = 0; p < k; p++){
                if (carinama==katabaru[p]){
                    cout<<"                                    PERPUSTAKAAN TEKNIK"<<endl;
                    cout<<"                                    UNIVERSITAS MATARAM"<<endl;
                    cout<<"                              Jln. Majapahit No. 62 Mataram"<<endl;
                    cout<<"==================================================================================================="<<endl;
                    cout<<"Nama : "<<pinjam.nama[i]<<setiosflags(ios::right)<<setw(82-a)<<"TTL  : "<<pinjam.tgl[i]<<endl;
                    cout<<"NIM  : "<<pinjam.nim[i]<<"\t\t\t\t\t\t\t\t  Umur : "<<umur(simpantanggal)<<endl;
                    cout<<"..................................................................................................."<<endl;
                    cout<<"|No.|          Judul         |    Genre    |  Jenis Buku  |   Penulis   | Penerbit | Tahun Terbit |"<<endl;
                    cout<<"..................................................................................................."<<endl;
                    for (int f = 0; f < 100; f++){
                        string genre = "" ; genre += (mhs.ID[i][f])[0];genre += (mhs.ID[i][f])[1];
                        string jenis = ""; jenis += (mhs.ID[i][f])[2];jenis += (mhs.ID[i][f])[3];
                        string penulis = ""; penulis += (mhs.ID[i][f])[4];penulis += (mhs.ID[i][f])[5];
                        string terbit = ""; terbit += (mhs.ID[i][f])[6];terbit += (mhs.ID[i][f])[7];
                        string year = ""; year += (mhs.ID[i][f])[8];year += (mhs.ID[i][f])[9];
                        for (int g = 0; g < 11; g++){
                            if (genre==mhs.genre[0][g]){
                                genre = mhs.genre[1][g];
                            }
                            if (jenis==mhs.jenis[0][g]){
                                jenis = mhs.jenis[1][g];
                            }
                            if (penulis==mhs.penulis[0][g]){
                                penulis = mhs.penulis[1][g];
                            }
                            if (terbit==mhs.penerbit[0][g]){
                                terbit = mhs.penerbit[1][g];
                            }
                            if (year==mhs.tahun[0][g]){
                                year = mhs.tahun[1][g];
                            }   
                        }
                        if (mhs.judul[i][f]!=""){
                            cout<<"| "<<f+1<<" | "<<setiosflags(ios::right)<<setw(22)<<mhs.judul[i][f];cout<<" | "<<setiosflags(ios::right)<<setw(11)<<genre;
                            cout<<" | "<<setiosflags(ios::right)<<setw(12)<<jenis;cout<<" | "<<setiosflags(ios::right)<<setw(11)<<penulis;
                            cout<<" | "<<setiosflags(ios::right)<<setw(8)<<terbit;cout<<" | "<<setiosflags(ios::right)<<setw(12)<<year<<" | ";
                            cout<<"\n..................................................................................................."<<endl;
                        }
                    }
                    cout<<endl<<setw(32)<<"Petugas Perpustakaan"<<setw(61)<<"Kepala Penanggung Jawab\n\n\n\n\n";
                    cout<<setw(34)<<"Nuzhairil Arsanurrahman"<<setw(53)<<"Shafa Asyari Ramadhan"<<endl;   
                }   
            }   
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
			cekdata(pilih);
			goto menu;
		case 4 :
			cekdata(pilih);
			goto menu;
			break;
		
		
			
	}

}


int main(){
	menu();
	return 0;
}

