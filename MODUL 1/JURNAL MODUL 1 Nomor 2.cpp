#include <iostream>
using namespace std;
int main(){
int JamNyata, MenitNyata, DetikNyata, detik
,JamLain, MenitLain, DetikLain,
JamBawah, MenitBawah, DetikBawah;
cout<<"Masukkan Waktu dalam Detik (Nyata) : ";
cin>>detik;
JamNyata = detik/(60*60);
DetikNyata = detik -((60*60)*JamNyata);
MenitNyata = DetikNyata/60;
DetikNyata = detik % 60;
cout<<JamNyata<<" jam"<<" "<<MenitNyata<<" menit"<<" "<<DetikNyata<<" detik"<<endl;
JamLain = (detik/(60*300));
DetikLain = (detik -((60*300)*JamLain));
MenitLain = (DetikLain/300);
DetikLain = (detik/5)%60;
cout<<JamLain<<" jam"<<" "<<MenitLain<<" menit"<<" "<<DetikLain<<" detik"<<endl;
JamBawah= (detik/(60*480));
DetikBawah= detik -((60*480)*JamBawah);
MenitBawah = DetikBawah/480;
DetikBawah= (detik*3/24)%60;
cout<<JamBawah<<" jam"<<" "<<MenitBawah<<" menit"<<" "<<DetikBawah<<" detik"<<endl;
return 0;
}
