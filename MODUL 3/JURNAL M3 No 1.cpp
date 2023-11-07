#include <iostream>
#include <string>
using namespace std;
int main(){
    int a,b,c,d,tmp, kali=0;
    cout<<"==== Program Perhitungan Dua Matriks ===="<<endl;
    cout<<"========================================="<<endl<<endl;
    cout<<"Masukkan Ordo Matriks 1"<<endl;\
    cout<<"Ordo Baris : ";
    cin>>a;
    cout<<"Ordo Kolom : ";
    cin>>b;
    cout<<"Masukkan Ordo Matriks 2"<<endl;
    cout<<"Ordo Baris : ";
    cin>>c;
    cout<<"Ordo Kolom : ";
    cin>>d;
    int matriks1[a][b];
    int matriks2[c][d];
    int matrikshasil[a][d];
    cout<<"\nMasukkan Nilai Matriks 1 : "<<endl;
    for (int i = 1; i <=a; i++){
        for (int j = 1; j <= b; j++){
            cout<<"Matriks 1 ["<<i<<"]["<<j<<"] : ";
            cin>>matriks1[i][j];
        }
    }
    cout<<endl;
    cout<<"\nMasukkan Nilai Matriks 2 : "<<endl;
    for (int i = 1; i <=c; i++){
        for (int j = 1; j <= d; j++){
            cout<<"Matriks 2 ["<<i<<"]["<<j<<"] : ";
            cin>>matriks2[i][j];
        }
    }
    cout<<endl;
    cout<<"Output Matriks";
    cout<<"\nMatriks 1"<<endl;
    for (int i = 1; i <=a; i++){
        for (int j = 1; j <= b; j++){
            cout<<matriks1[i][j]<<"\t";
        }
        cout<<endl;
        
    }
    cout<<endl;
    cout<<"\nMatriks 2"<<endl;
    for (int i = 1; i <=c; i++){
        for (int j = 1; j <= d; j++){
            cout<<matriks2[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Matriks Setelah Diurutkan\n";
    cout<<"Matriks 1"<<endl;
    for (int i = 1; i <= a; i++){
        for (int j = 1; j <= b; j++){
            for (int k = 1; k <= b; k++){
                for (int n = 1; n <= b; n++){
                    if (matriks1[i][j]<matriks1[k][n]){
                        tmp = matriks1[i][j];
                        matriks1[i][j] = matriks1[k][n];
                        matriks1[k][n] = tmp;
                    }
                }
            }
        }
    }
    for (int i = 1; i <=a; i++){
        for (int j = 1; j <= b; j++){
            cout<<matriks1[i][j]<<"\t";
        }
        cout<<endl;        
    }
    cout<<endl; 
    cout<<"Matriks 2"<<endl;
    for (int i = 1; i <= c; i++){
        for (int j = 1; j <= d; j++){
            for (int k = 1; k <= d; k++){
                for (int n = 1; n <= d; n++){
                    if (matriks2[i][j]<matriks2[k][n]){
                        tmp = matriks2[i][j];
                        matriks2[i][j] = matriks2[k][n];
                        matriks2[k][n] = tmp;
                    }
                }
            }
        }
    }
    for (int i = 1; i <=c; i++){
        for (int j = 1; j <= d; j++){
            cout<<matriks2[i][j]<<"\t";
        }
        cout<<endl;        
    }
    cout<<endl;   
    if (b==c){
        cout<<"Hasil Perkalian Matriks Setelah Diurutkan"<<endl;
        for (int i = 1; i <=a; i++){
            for (int j = 1; j <= d; j++){
                for (int k = 1; k <= c; k++){
                    kali = kali + matriks1[i][k]*matriks2[k][j];
                }
                matrikshasil[i][j]=kali;
                kali=0;
            }
            
        }
        for (int i = 1; i <= a; i++){
            for (int j = 1; j <= d; j++)
            {
                cout << matrikshasil[i][j]<<"\t";
            }
            cout<<endl;
        }  
    }else{
        cout<<"=================================================================="<<endl;
cout<<"================ Matriks tidak Dapat Dikalikan :( ================"<<endl;
cout<<"== Masukkan Input Ordo Sesuai dengan Aturan Perkalian Matriks!! =="<<endl; cout<<"==================================================================";
    }
    return 0;
}
