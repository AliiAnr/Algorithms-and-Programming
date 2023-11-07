#include <iostream>
#include <windows.h>
using namespace std;



int pembayaran(int input){
    int nom[3] = {150000, 100000, 200000};
    return nom[input-1];
}

string gantiprofil(string nama2, string pass2, int input){
    char pilih;
    string ubah[4];
    ubah[0] = "Username";
    ubah[1] = "Password";
    cout<<"Masukkan "<<ubah[input-1]<<" Baru : "; cin>>ubah[input+1];
    cout<<"Lanjutkan Perubahan ? y/n : ";
	cin>>pilih;
	cout<<endl;
    if (pilih=='y')
    {
        cout<<"Perubahan Berhasil"<<endl;
        return ubah[input+1];
    }else{
        if(input==1){
            return nama2;
        }else if(input==2){
            return pass2;
        }
    }   
}

void daftar(int saldo, string nama2, string pass2){
	char input, pilih, opsi;
	int chs;
	string ID;
	int jmlsaldo,nom, sisa;
	menu :
	cout<<"1. cek saldo"<<endl;
	cout<<"2. Top Up Saldo"<<endl;
	cout<<"3. Transfer"<<endl;
	cout<<"4. Pembayaran"<<endl;
	cout<<"5. Profil"<<endl;
	cout<<"6. logout"<<endl;
	cout<<"Pilih = ";cin>>input;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
	cout<<endl;
	
	switch (input){
		case '1':
			cout<<"Saldo Anda Adalah = "<<saldo<<endl<<endl;
			goto menu;
			break;
		case '2':
			cout<<"1. Lanjutkan TopUp"<<endl;
			cout<<"2. Kembali"<<endl;
			cout<<"Pilih = ";cin>>pilih;
			cout<<endl;
			switch (pilih){
				
				case '1':
					cout<<"Masukkan Jumlah saldo : ";cin>>jmlsaldo;
					saldo += jmlsaldo;
					cout<<"Saldo anda Sekarang Adalah = "<<saldo<<endl<<endl;
					goto menu;
					break;
				case '2':
					goto menu;
					break;
			}
		case '3':
			cout<<"1. Lanjutkan Transfer"<<endl;
			cout<<"2. Kembali"<<endl;
			cout<<"Pilih = ";cin>>pilih;
			cout<<endl;
			switch (pilih){
				
				case '1':
					cout<<"Masukkan No. ID Penerima\t: ";cin>>ID;
					cout<<"Masukkan Nominal\t\t: ";cin>>nom;
					saldo-=nom;
					cout<<"Transfer Berhasil"<<endl;
					cout<<"No. ID Penerima\t\t\t: "<<ID<<endl;
					cout<<"Nominal\t\t\t\t: "<<nom<<endl;
					cout<<"Sisa Saldo Anda Adalah\t\t: "<<saldo<<endl<<endl;
					goto menu;
					break;
				case '2':
					goto menu;
					break;
			}
		case '4':
			list:
            cout<<"1. Listrik"<<endl;
            cout<<"2. Air"<<endl;
            cout<<"3. Belanja Online"<<endl;
            cout<<"4. Kembali"<<endl;
            cout<<"Pilih : "; cin>>chs;
            cout<<endl;
            switch (chs){
            	case 1:
				    cout<<"Masukkan No Pelanggan\t: "; cin>>ID;
				    cout<<"No Pelanggan Anda adalah: "<<ID;
				    cout<<"\nTagihan Listrik Anda\t: Rp."<<pembayaran(chs)<<endl;
				    cout<<"Lanjutkan Pembayaran ? y/n : "; cin>>opsi;
				    	switch (opsi){
				    		case 'y':
				    			saldo-=pembayaran(chs);
						        cout<<"Pembayaran Berhasil"<<endl;
						        cout<<"Sisa Saldo Anda Adalah\t: Rp."<<saldo<<endl<<endl;
						        goto menu;
						        break;
						    case 'n':
						    	goto list;
								break;	
						}
						break;
				case 2:
					cout<<"Masukkan No Pelanggan\t: "; cin>>ID;
				    cout<<"No Pelanggan Anda adalah: "<<ID;
				    cout<<"\nTagihan Air Anda\t: Rp."<<pembayaran(chs)<<endl;
				    cout<<"Lanjutkan Pembayaran ? y/n : "; cin>>opsi;
				    	switch (opsi){
				    		case 'y':
				    			saldo-=pembayaran(chs);
						        cout<<"Pembayaran Berhasil"<<endl;
						        cout<<"Sisa Saldo Anda Adalah\t: Rp."<<saldo<<endl<<endl;
						        goto menu;
						        break;
						    case 'n':
						    	goto list;
								break;	
					}
				case 3:
					cout<<"Masukkan No Pelanggan\t: "; cin>>ID;
				    cout<<"No Pelanggan Anda adalah: "<<ID;
				    cout<<"\nTagihan Belanja Online Anda: Rp."<<pembayaran(chs)<<endl;
				    cout<<"Lanjutkan Pembayaran ? y/n : "; cin>>opsi;
				    	switch (opsi){
				    		case 'y':
				    			saldo-=pembayaran(chs);
						        cout<<"Pembayaran Berhasil"<<endl;
						        cout<<"Sisa Saldo Anda Adalah\t: Rp."<<saldo<<endl<<endl;
						        goto menu;
						        break;
						    case 'n':
						    	goto list;
						}
				case 4:
					goto menu;
					break;
			}
		case '5':
			profil:
            cout<<"1. Cek Profil"<<endl;
            cout<<"2. Ubah Profil"<<endl;
            cout<<"3. Kembali"<<endl;
            cout<<"Pilih : "; cin>>chs;
            cout<<endl;
            switch (chs){
            	case 1:
	            	cout<<"1. Cek Username"<<endl; 
	                cout<<"2. Cek Password"<<endl; 
	                cout<<"3. Kembali"<<endl; 
	                cout<<"Pilih : "; cin>>chs;
	                cout<<endl;
	                switch (chs){
	                case 1:
	                    cout<<"Username Anda Adalah : "<<nama2<<endl<<endl;
	                    goto profil;
	                    break;
	                case 2:
	                    cout<<"Password Anda Adalah : "<<pass2<<endl<<endl;
	                    goto profil;
	                    break;
	                case 3:
	                    goto profil;
	                    break;
	                }
	                break;
	            case 2:
	            	cout<<"1. Ubah Username"<<endl; 
	                cout<<"2. Ubah Password"<<endl; 
	                cout<<"3. Kembali"<<endl; 
	                cout<<"Pilih : "; cin>>chs;
	                cout<<endl;
	                switch (chs){
	                	case 1:
	                		nama2 = gantiprofil(nama2, pass2, chs);
		                    goto profil;
		                    break;
		                case 2:
		                    pass2 = gantiprofil(nama2, pass2, chs);
		                    goto profil;
		                    break;
		                case 3:
		                    goto profil;
		                    break;
		                }
		                break;
		        case 3:
		            goto menu;
		            break;
		            }
		            break;
		case '6':
			cout<<"Sampai Jumpa :)";
				break;
	}
            
            
}


int main(){
	int a = 0, saldo = 1000000;
	string nama1, pass1, nama2, pass2;
	char pilih, p;
	masuk:
	cout<<"===Menu Login==="<<endl;
	cout<<"1. Masuk"<<endl;
	cout<<"2. daftar"<<endl;
	cout<<"3. Keluar"<<endl;
	cout<<"Pilih = ";
	cin>>pilih;
	cout<<endl;
	switch (pilih){
		case '1':
			do{
			cout<<"Username anda : "; cin>>nama1;
			cout<<"Password anda : "; cin>>pass1;
			cout<<endl;
			if(nama1==nama2&&pass1==pass2){
				system ("color A");	
				cout<<"Login berhasil, pilih menu di bawah ini"<<endl;
				daftar(saldo, nama2, pass2);
				break;
			}
			else{
					system("color 4");
					cout << "\n =============================\n";
					cout << " Username atau Password Salah atau Tidak Terdaftar ("<<a<<"x)\n";
					cout << " =============================\n\n";
					a = a + 1;
				}
		}while(a<=3);
				break;
				
		case '2':
			cout<<"Selamat Datang di Menu Daftar"<<endl;
			cout<<"Username anda : "; cin>>nama2;
            cout<<"Password anda : "; cin>>pass2;
            cout<<"Terima Kasih, Silakan Login\n"<<endl;
            goto masuk;
            break;

        case '3':
            cout<<"Sampai Jumpa :)"<<endl;
            break;
        
	}
	cout<<endl;
	cout<<"============="<<endl;
	cout<<"TERIMAKASIH"<<endl;
	cout<<"============="<<endl;
	
}
