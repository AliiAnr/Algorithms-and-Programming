#include <iostream>

using namespace std;
int jumlah;
struct UNO{
    string nama;
    int kartu;
    UNO *next; 
}*head, *tail, *cur, *cur2, *newNode, *del, *before, *play, *BEF;
void addplayer(string name, int i){
    if (i>0){
        newNode = new UNO();
        newNode -> nama = name;
        newNode -> kartu = 7;
        newNode -> next = NULL;
        tail -> next = newNode;
        tail = newNode;
    }else{
        head = new UNO();
        head -> nama = name;
        head -> kartu = 7;
        head -> next = NULL;
        tail = head;
    }
}
int countPlayer(){
    cur = head;
    int n = 0;
    while (cur!=NULL){
        n++;
        cur = cur->next;
    }
    return n;
}
void removePlayer(int posisi){
    if (posisi==0){
        del = head;
        head = head->next;
        delete del;
    }else if(posisi==(countPlayer()-1)){
        del = tail;
        cur2 = head;
        while (cur2->next != tail){
            cur2 = cur2->next;
        }
        tail = cur2;
        tail->next = NULL;
        delete del;
    }else{
        int nomor = 0;
        cur2 = head;
        while (nomor <= posisi){
            if (nomor == posisi-1)
            {
                before = cur2;
            }
            if (nomor == posisi)
            {
                del = cur2;
            }
            cur2 = cur2->next;
            nomor++;
        }
        before->next = cur2;
        delete del;
    }
}
void printplayer(){
    cur = head;
    while (cur != NULL ){
        cout<<cur->nama<<", ";
        cur = cur->next;
    }
}
int main(){
    int input; string nama;
    awal:
        cout<<"Selamat datang di UNO Card Counter! :)"<<endl;
        cout<<"Menu : "<<endl;
        cout<<"1. Tambah Pemain"<<endl;
        cout<<"2. Mulai Bermain"<<endl;
        cout<<"3. Quit"<<endl;
        cout<<">> "; cin>>input;
        system("cls");
        switch (input){
        case 1:
            addmore:
                cout<<"====TAMBAH PEMAIN====\n"<<endl;
                cout<<"Masukkan Jumlah Pemain\n";
                cout<<">> ";cin>>jumlah;
                jumlah+=countPlayer();
                for (int i = countPlayer(); i < jumlah; i++){
                    cout<<"Masukkan Nama Pemain ke-"<<i+1<<endl;
                    cout<<">> ";cin>>nama;
                    addplayer(nama,i);
                    cout<<"Pemain Berhasil Ditambah!\n";
                }
                system("cls");
                addmore2:
                    cout<<jumlah<<" Pemain Berhasil Ditambah!\n\n";
                    cout<<"1. Tambah Lagi\n";
                    cout<<"2. Kembali Ke Menu Utama\n";
                    cout<<">> ";cin>>input;
                    switch (input){
                    case 1:
                        system("cls");
                        goto addmore;
                        break;
                    case 2:
                        system("cls");
                        goto awal;
                    default:
                        cout<<"Input yang anda masukkan salah !!! \n";
                        system("pause");
                        system("cls");
                        goto addmore2;
                        break;
                    }
            break;
        case 2:
            char input2;int n;
            again:
                if (countPlayer()==1){
                    goto awal;
                }else{    
                    play = head;
                    
                    for(int i = 0; i < countPlayer(); i++){
                        again2:
                            cout<<"Sisa Pemain : ";printplayer();
                            cout<<"\nGiliran "<<play->nama<<"!!"<<endl;
                            cout<<"Jumlah Kartu : "<<play->kartu<<endl;
                            cout<<"Pass(P)\n";
                            cout<<"Draw(D)\n";
                            cout<<"Skip(S)\n";
                            cout<<">> ";cin>>input2;
                            switch (input2){
                            case 'P':
                                play->kartu-=1;
                                system("cls");
                                break;
                            case 'D':
                                int card;
                                cout<<"Jumlah Kartu\n>> ";cin>>card;
                                play->kartu+=card;
                                system("cls");
                                break;
                            case 'S':
                                system("cls");
                                break;
                            default:
                                cout<<"Input yang anda masukkan salah !!! \n";
                                system("pause");
                                system("cls");
                                goto again2;
                                break;
                            }
                            BEF = play;
                            play = play->next;
                            if (BEF->kartu==1){
                                cout<<"!!!UNOOO!!!\n";
                                system("pause");
                                system("cls");   
                            }else if (BEF->kartu==0){ 
                                cout<<"Selamat "<<BEF->nama<<"!!!"<<endl;
                                cout<<"KAMU Telah Menyelesaikan Permainan dan Harus Meninggalkan Permainan!\n";
                                removePlayer(i);   
                                system("pause");
                                system("cls");
                                if (i==(countPlayer()))
                                {
                                    goto again;
                                }else{
                                    goto again2;
                                }
                            }
                    }
                    goto again;
                }
            break;
        case 3:
            break;
        default:
            cout<<"Input yang anda masukkan salah !!! \n";
            system("pause");
            system("cls");
            goto awal;
            break;
        }
    return 0;
}