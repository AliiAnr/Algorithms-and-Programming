#include <iostream>
#include <string>
using namespace std;
int main(){
    int unv, org;
    char hrf;
    cout<<"Masukkan Jumlah Universe\t: ";
    cin>>unv;
    cout<<"Masukkan Jumlah Orang\t\t: ";
    cin>>org;
    cout<<"Masukkan Huruf\t\t\t: ";
    cin>>hrf;
    string universe[unv][org], simpan,simpan2, simpan3;
    for (int i = 0; i < unv; i++) //Memasukkan Nama Orang
    {
        cout<<"\nUniverse "<<i+1<<endl;
        for (int j = 0; j < org; j++){

            cout<<"Orang ke-"<<j+1<<" : ";
            cin.ignore();
            getline(cin,universe[i][j]);
        }
    }

    for (int i = 0; i < unv; i++) //Menghilangkan char tertentu
    {
        cout<<"\nUniverse "<<i+1<<endl;
        for (int j = 0; j < org; j++)
        {
            int jumlah;
            jumlah=universe[i][j].length();
            for (int k = 0; k < jumlah; k++)
            {
                (universe[i][j])[k];
                if (((universe[i][j])[k]) == hrf || ((universe[i][j])[k]) == hrf + 32 || ((universe[i][j])[k]) == hrf - 32 )
                {
                    (universe[i][j])[k] = 0 ;
                }
            }
        }
        for (int n = 0; n < org; n++)
        { 
            int k=n+1;
            if (k<org && universe[i][n]==universe[i][k])
            {
                int jm;
                jm=universe[i][k].length();
                for (int y = 0; y < jm; y++)
                {
                    (universe[i][k])[y]=127;
                }     
                simpan=universe[i][k];                           
            }
            if (n<(org-1)&&universe[i][org-1]==universe[i][n])
            {
                int jm;
                jm=universe[i][org-1].length();
                for (int y = 0; y < jm; y++)
                {
                    (universe[i][org-1])[y]=127;
                }
                simpan=universe[i][org-1];
            }
        }
        for (int m = 0; m < org; m++)
        {
            if ((universe[i][m])[0]!=127)
            {
                cout<<universe[i][m]<<endl;
            }
            
            
        }
        

        
    }
    return 0;
}