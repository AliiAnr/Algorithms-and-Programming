#include <iostream>
using namespace std;
void payment(int saldo, int input){
    int id, nominal[3];
    string tagihan[3];
    char opsi;
    tagihan[0]="Listrik";
    tagihan[1]="Air";
    tagihan[2]="Belanja Online";
    nominal[0] = 150000;
    nominal[1] = 100000;
    nominal[2] = 200000; 
    cout<<"Masukkan No Pelanggan\t: "; cin>>id;
    cout<<"No Pelanggan Anda adalah: "<<id;
    cout<<"\nTagihan "<<tagihan[input-1]<<" Anda\t: Rp."<<nominal[input-1]<<endl;
    cout<<"Lanjutkan Pembayaran ? y/n : "; cin>>opsi;
    if (opsi=='y')
    {
        saldo-=nominal[input-1];
        cout<<"Pembayaran Berhasil"<<endl;
        cout<<"Sisa Saldo Anda Adalah\t: Rp."<<saldo;
    }
}
int saldopay(int input){
    int nominal[3];
    nominal[0] = 150000;
    nominal[1] = 100000;
    nominal[2] = 200000;
    return nominal[input-1];
}
string profilChange(string user, string pass, int input){
    char opsi;
    string data[4];
    data[0] = "Username";
    data[1] = "Password";
    cout<<"Masukkan "<<data[input-1]<<" Baru : "; cin>>data[input+1];
    cout<<"Lanjutkan Perubahan ? Y/N : "; cin>>opsi;
    if (opsi=='y')
    {
        cout<<"Perubahan Berhasil"<<endl;
        return data[input+1];
    }else{
        if(input==1){
            return user;
        }else if(input==2){
            return pass;
        }
    }   
}
void utama(char input, int saldo, int saldo1, string user, string pass){
    utamaa:
    string data;
    int input2, id;
    cout<<"\n===Menu Utama==="<<endl;
    cout<<"a. Cek Saldo"<<endl;
    cout<<"b. Top Up Saldo"<<endl;
    cout<<"c. Transfer"<<endl;
    cout<<"d. Pembayaran"<<endl;
    cout<<"e. Profil"<<endl;
    cout<<"f. Logout"<<endl;
    cout<<"Pilih : "; cin>>input;
    switch(input){
        case 'a':
            cout<<"Saldo Anda Adalah : Rp."<<saldo;
            goto utamaa;
            break;
        case 'b':
            cout<<"1. Lanjutkan Top Up\n";
            cout<<"2. Kembali\n";
            cout<<"Pilih : "; cin>>input2;
            switch(input2){
                case 1 :
                    cout<<"Masukkan Jumlah Saldo : Rp."; cin>>saldo1;
                    saldo+=saldo1;
                    cout<<"Saldo Anda Sekarang Adalah : Rp."<<saldo;
                    goto utamaa;
                    break;
                case 2 :
                    goto utamaa;
                    break;
            }
            cout<<"Masukkan Jumlah Saldo : Rp."; cin>>saldo1;
            saldo+=saldo1;
            cout<<"Saldo Anda Sekarang Adalah : Rp."<<saldo;
            goto utamaa;
            break;
        case 'c':
            cout<<"1. Lanjutkan Transfer\n";
            cout<<"2. Kembali\n";
            cout<<"Pilih : "; cin>>input2;
            switch (input2)
            {
            case 1 :
                cout<<"Masukkan ID Penerima\t: "; cin>>id;
                cout<<"Masukkan Nominal\t: "; cin>>saldo1;
                saldo-=saldo1;
                cout<<"Transfer Berhasil"<<endl;
                cout<<"No ID Penerima\t\t: "<<id<<endl;
                cout<<"Nominal\t\t\t: "<<saldo1<<endl;
                cout<<"Sisa Saldo Anda Adalah\t: "<<saldo;
                goto utamaa;
                break;
            case 2 : 
                goto utamaa;
                break;
            }

        case 'd':
            pay:
            cout<<"1. Listrik"<<endl;
            cout<<"2. Air"<<endl;
            cout<<"3. Belanja Online"<<endl;
            cout<<"4. Kembali"<<endl;
            cout<<"Pilih : "; cin>>input2;
            switch (input2)
            {
            case 1:
                payment(saldo,input2);
                saldo -= saldopay(input2);
                goto utamaa;
                break;
            case 2:
                payment(saldo,input2);
                saldo -= saldopay(input2);
                goto utamaa;
                break;
            case 3:
                payment(saldo,input2);
                saldo -= saldopay(input2);
                goto utamaa;
                break;
            case 4:
                goto utamaa;
                break;
            }
            break;
        case 'e':
            prof:
            cout<<"1. Cek Profil"<<endl;
            cout<<"2. Ubah Profil"<<endl;
            cout<<"3. Kembali"<<endl;
            cout<<"Pilih : "; cin>>input2;
            switch (input2){
            case 1:
                cout<<"1. Cek Username"<<endl; 
                cout<<"2. Cek Password"<<endl; 
                cout<<"3. Kembali"<<endl; 
                cout<<"Pilih : "; cin>>input2;
                switch (input2){
                case 1:
                    cout<<"Username Anda Adalah : "<<user<<endl;
                    goto prof;
                    break;
                case 2:
                    cout<<"Password Anda Adalah : "<<pass<<endl;
                    goto prof;
                    break;
                case 3:
                    goto prof;
                    break;
                }
                break;
            case 2:
                cout<<"1. Ubah Username"<<endl; 
                cout<<"2. Ubah Password"<<endl; 
                cout<<"3. Kembali"<<endl; 
                cout<<"Pilih : "; cin>>input2;
                switch (input2){
                case 1:

                    user = profilChange(user, pass, input2);
                    goto prof;
                    break;
                case 2:

                    pass = profilChange(user, pass, input2);
                    goto prof;
                    break;
                case 3:
                    goto prof;
                    break;
                }
                break;
            case 3:
                goto utamaa;
                break;
            }
            break;
        case 'f':
            cout<<"Sampai Jumpa :)";
            break;
    }
}
int main(){
    int saldo = 1000000, saldo1=0;
    string user, pass, user1, pass1;
    char input;
    login1:
    cout<<"===Menu Login==="<<endl;
    cout<<"a. Masuk"<<endl;
    cout<<"b. Daftar"<<endl;
    cout<<"c. Keluar"<<endl;
    cout<<"Pilih : "; cin>>input;
    switch(input){
        case 'a':
            cout<<"Masukkan Username : "; cin>>user1; 
            cout<<"Masukkan Password : "; cin>>pass1;
            if ((user1==user)&&(pass1==pass)){
                cout<<"Login Berhasil Pilih Menu Di Bawah ini";
                utama (input, saldo, saldo1, user, pass);
            }else{
                cout<<"Username atau Password Anda Salah atau tidak terdaftar"<<endl;
                goto login1;
            }
            break;
        case 'b':
            cout<<"Masukkan Username Baru\t: "; cin>>user;
            cout<<"Masukkan Password Baru\t: "; cin>>pass;
            cout<<"Terima Kasih, Silakan Login\n";
            goto login1;
            break;
        case 'c':
            cout<<"Sampai Jumpa :)";
            break;
    }
    return 0;
}