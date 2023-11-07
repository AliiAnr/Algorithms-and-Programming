#include <iostream>
using namespace std;
int max = 0;
    int min  max;

void garis(){
   cout<<"=========================================="<<endl;
}

   int main(){
      
int a,b,c,d,e,f,tmp=0, kali=1, jumlah=0;
    garis();
    cout<<"INPUT ORDO"<<endl;
    garis();
    cout<<"Ordo Matriks[Baris] : ";
    cin>>a;
    cout<<"Ordo Matriks[Kolom] : ";
    cin>>b;
    cout<<endl;
    garis();
    int matriks[a][b];
    cout<<"\nINPUT SELURUH ELEMENT MATRIKS : "<<endl;
    garis();
    for (int i =0; i <a; i++){
        for (int j = 0; j < b; j++){
            cout<<"Element["<<i<<"]["<<j<<"] : ";
            cin>>matriks[i][j];
        }
    }
    cout<<endl;
    garis();
    cout<<"\nELEMENT MATRIKS"<<endl;
    garis();
    for (int i = 0; i <a; i++){
        for (int j = 0; j < b; j++){
            cout<<matriks[i][j]<<"\t";
        }
        cout<<endl;
        
    }
    cout<<endl;
    garis();
    cout<<"Pilih Element Acuan A dan B"<<endl;
    garis();
    cout<<"Indeks Element Acuan A[Baris,Kolom]"<<endl;
    cout<<">> ";cin>>c;
    cout<<">> ";cin>>d;
    cout<<"Indeks Element Acuan B[Baris,Kolom]"<<endl;
    cout<<">> ";cin>>e;
    cout<<">> ";cin>>f;
    cout<<endl;
    garis();
    cout<<"Hasil Element Terpilih"<<endl;
    garis();
    cout<<"Element Terpilih"<<endl;
    for(int i=c;i<a;i++){
		for(int j=d;j<b;j++){
         if(i<=e && j<=f){
			cout<<matriks[i][j]<<" ";
         jumlah += matriks[i][j];
         tmp += 1;
         kali = kali * matriks[i][j];
         }
		}
		cout<<endl;
	}
    
    
    for(int i=c;i<a;i++){
		for(int j=d;j<b;j++){
         if(i<=e && j<=f){
			if(matriks[i][j]>max){
                max = matriks[i][j];
            }
            if(matriks[i][j]<min){
                    min = matriks[i][j];
            }
         }
		}
		cout<<endl;
	}
    
    
   int simpan = jumlah/tmp;
   cout<<"Hasil penjumlahan seluruh element terpilih\t= "<<jumlah<<endl;
   cout<<"Hasil perkalian seluruh element terpilih\t= "<<kali<<endl;
   cout<<"Nilai rata2 dari seluruh element terpilih\t= "<<simpan<<endl;
   cout<<"Nilai terbesar dari element terpilih\t\t=  "<<max<<endl;
   cout<<"Nilai terkecil dari element terpilih\t\t=  "<<min<<endl;
   
   
 
    
   return 0;
}