#include <iostream>
using namespace std;

int besar(int A[][100], int B[][100], int ordo)
{
	int max;
    int max1 = A[0][0];
    for (int i = 0; i < ordo; i++)
    {
         for (int j = 0; j < ordo; j++)
         {
             if (A[i][j] > max1)
             {
                 max1 = A[i][j];
             }
         }
    }
    
    int max2 = B[0][0];
    for (int i = 0; i < ordo; i++)
    {
         for (int j = 0; j < ordo; j++)
         {
             if (B[i][j] > max2)
             {
                 max2 = B[i][j];
             }
         }
    }
    
    if(max1>max2){
    	max = max1;
	}
	else if (max2>max1){
		max = max2;
	}
	else{
		max = max1;
	}

    return max;
}
int kecil(int A[][100], int B[][100], int ordo)
{
	int min;
    int min1 = A[0][0];
    for (int i = 0; i < ordo; i++)
    {
         for (int j = 0; j < ordo; j++)
         {
             if (A[i][j] < min1)
             {
                 min1 = A[i][j];
             }
         }
    }
    
    int min2 = B[0][0];
    for (int i = 0; i < ordo; i++)
    {
         for (int j = 0; j < ordo; j++)
         {
             if (B[i][j] < min2)
             {
                 min2 = B[i][j];
             }
         }
    }
    
    if(min1>min2){
    	min = min1;
	}
	else if (min2>min1){
		min = min2;
	}
	else{
		min = min1;
	}

    return min;
}
string lokasi1(int A[][100], int B[][100], int ordo)
{
	string tmp;
	int max;
    int max1 = A[0][0];
    for (int i = 0; i < ordo; i++)
    {
         for (int j = 0; j < ordo; j++)
         {
             if (A[i][j] > max1)
             {
                 max1 = A[i][j];
             }
         }
    }
    
    int max2 = B[0][0];
    for (int i = 0; i < ordo; i++)
    {
         for (int j = 0; j < ordo; j++)
         {
             if (B[i][j] > max2)
             {
                 max2 = B[i][j];
             }
         }
    }
    
    if(max1>max2){
    	tmp = "1";
	}
	else if (max2>max1){
		tmp = "2";
	}
	else{
		tmp = "1 dan 2";
	}

    return tmp;
}
string lokasi2(int A[][100], int B[][100], int ordo)
{
	string tmp;
	int min;
    int min1 = A[0][0];
    for (int i = 0; i < ordo; i++)
    {
         for (int j = 0; j < ordo; j++)
         {
             if (A[i][j] < min1)
             {
                 min1 = A[i][j];
             }
         }
    }
    
    int min2 = B[0][0];
    for (int i = 0; i < ordo; i++)
    {
         for (int j = 0; j < ordo; j++)
         {
             if (B[i][j] < min2)
             {
                 min2 = B[i][j];
             }
         }
    }
    
    if(min1>min2){
    	tmp = "2";
	}
	else if (min2>min1){
		tmp = "1";
	}
	else{
		tmp = "1 dan 2";
	}

    return tmp;
}





int main(){
	int ordo, A;
	cout<<"Input ordo matriks persegi = ";
	cin>>ordo;
	cout<<endl;
	
	cout<<"Input nilai matriks 1"<<endl;
	int matriks1[100][100], matriks2[100][100];
	for(int i=0; i<ordo;i++){
		for(int j=0; j<ordo; j++){
			cout<<"Matriks ["<<i<<"]"<<"["<<j<<"] = ";
			cin>>matriks1[i][j];
		}
	}
	cout<<endl;
	cout<<"Input nilai matriks 2"<<endl;
	for(int a=0; a<ordo;a++){
		for(int b=0; b<ordo; b++){
			cout<<"Matriks ["<<a<<"]"<<"["<<b<<"] = ";
			cin>>matriks2[a][b];
		}
	}
	cout<<endl;
	
	cout<<"===Hasil input matriks==="<<endl<<endl;
	cout<<"Matriks 1"<<endl;
	for(int i=0; i<ordo;i++){
		cout<<"[";
		for(int j=0; j<ordo; j++){
			if(j==ordo-1){
				cout<<matriks1[i][j];
			}
			else{
				cout<<matriks1[i][j]<<",";
			}
		}
		cout<<"]"<<endl;
	}
	cout<<endl;
	cout<<"Matriks 2"<<endl;
	for(int a=0; a<ordo;a++){
		cout<<"[";
		for(int b=0; b<ordo; b++){
			if(b==ordo-1){
				cout<<matriks2[a][b];
			}
			else{
				cout<<matriks2[a][b]<<",";
			}
		}
		cout<<"]"<<endl;
	}
	cout<<endl;
	
	cout<<"===Hasil penentuan Angka Terbesar dan Terkecil pada Dua Matriks==="<<endl<<endl;
	
	cout<<"Angka terbesar dari Matriks 1 dan Matriks 2 adalah '"<<besar(matriks1, matriks2, ordo)<<"', yang berada pada Matriks "<<lokasi1(matriks1, matriks2, ordo)<<endl;
	cout<<"Angka terkecil dari Matriks 1 dan Matriks 2 adalah '"<<kecil(matriks1, matriks2, ordo)<<"', yang berada pada Matriks "<<lokasi2(matriks1, matriks2, ordo)<<endl;
	

	
	}


