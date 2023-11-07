#include <iostream>
using namespace std;
int main() {
   int hinata, kageyama, tanaka, kenma, oikawa, nishinoya, yaku, bokuto, sawamura, aone;
   cout << "BOLA SEBELUM TERTUKAR" << endl;
   cout << "Masukkan jumlah bola hinata    : ";
   cin >> hinata;   cout << "Masukkan jumlah bola kageyama  : ";
   cin >> kageyama;
   cout << "Masukkan jumlah bola tanaka    : ";
   cin >> tanaka;
   cout << "Masukkan jumlah bola kenma     : ";
   cin >> kenma;
   cout << "Masukkan jumlah bola oikawa    : ";
   cin >> oikawa;
   cout << "Masukkan jumlah bola nishinoya : ";
   cin >> nishinoya;
   cout << "Masukkan jumlah bola yaku      : ";
   cin >> yaku;
   cout << "Masukkan jumlah bola bokuto    : ";
   cin >> bokuto;
   cout << "Masukkan jumlah bola sawamura  : ";
   cin >> sawamura;
   aone = oikawa, oikawa = hinata, hinata = kenma, kenma = yaku, yaku = kageyama, kageyama = tanaka, tanaka = nishinoya,
   nishinoya = bokuto, bokuto = sawamura, sawamura = kageyama - 2, kageyama = aone;
   cout << endl;
   cout << "BOLA SETELAH TERTUKAR" << endl;
   cout << "oikawa    : " << oikawa << endl;
   cout << "hinata    : " << hinata << endl;
   cout << "kenma     : " << kenma << endl;
   cout << "yaku      : " << yaku << endl;
   cout << "kageyama  : " << kageyama << endl;
   cout << "tanaka    : " << tanaka << endl;
   cout << "nishinoya : " << nishinoya << endl;
   cout << "bokuto    : " << bokuto << endl;
   cout << endl;
   cout << "Sawamura membawa milik kageyama dan terjatuh 2" << endl;
   cout << "sawamura  : " << sawamura << endl;
   cout << endl;
   cout << "Kageyama lalu membawa milik oikawa" << endl;
   cout << "Kageyama  : " << kageyama << endl;
   return 0;
}
