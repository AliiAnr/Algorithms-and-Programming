#include <iostream>
using namespace std;
int main() {
   string nama;
   int TanggalSekarang, BulanSekarang, TahunSekarang, TanggalLahir, BulanLahir, TahunLahir, tahun1, tahun2, bulan1, bulan2, bulan3, Tanggal1, Tanggal2, Tanggal3;
   string tempat;
   cout << "Masukkan Nama Anda\t: ";
   getline(cin >> ws, nama);
   cout << "Masukkan Alamat Anda\t: ";
   getline(cin >> ws, tempat);

   cout << "==========IDENTITAS==========" << endl;
   cout << "Nama   : " << nama << endl;
   cout << "Alamat : " << tempat << endl
        << endl;
   cout << "TANGGAL LAHIR" << endl;
   cout << "Masukkan Tanggal Lahir Anda\t: ";
   cin >> TanggalLahir;
   cout << "Masukkan Bulan Lahir Anda\t: ";
   cin >> BulanLahir;
   cout << "Masukkan Tahun Lahir Anda\t: ";
   cin >> TahunLahir;
   cout << endl;
   cout << "TANGGAL SAAT INI" << endl;
   cout << "Masukkan Tanggal Saat ini\t: ";
   cin >> TanggalSekarang;
   cout << "Masukkan Bulan Saat ini\t\t: ";
   cin >> BulanSekarang;
   cout << "Masukkan Tahun Saat ini\t\t: ";
   cin >> TahunSekarang;
   cout << endl;

   tahun1 = TahunSekarang - TahunLahir;
   tahun2 = tahun1 - 1;
   bulan1 = BulanSekarang - BulanLahir;
   bulan2 = BulanLahir - BulanSekarang;
   bulan3 = 12 - bulan2;
   Tanggal1 = TanggalSekarang - TanggalLahir;
   Tanggal2 = TanggalLahir - TanggalSekarang;
   Tanggal3 = 30 - Tanggal2;

   if (BulanSekarang >= 1 && BulanSekarang <= 12 && BulanLahir >= 1 && BulanLahir <= 12 && TanggalSekarang >= 1 && TanggalSekarang <= 31 && TanggalLahir >= 1 && TanggalLahir <= 31) {
      if (TahunSekarang > TahunLahir && BulanSekarang >= BulanLahir && TanggalSekarang >= TanggalLahir) {
         cout << "UMUR ANDA SAAT INI\n"
              << tahun1 << " tahun " << bulan1 << " bulan " << Tanggal1 << " hari " << endl;
      } else if (TahunSekarang > TahunLahir && BulanLahir >= BulanSekarang && TanggalLahir >= TanggalSekarang) {
         cout << "UMUR ANDA SAAT INI\n"
              << tahun2 << " tahun " << bulan3 << " bulan " << Tanggal3 << " hari " << endl;
      } else if (TahunSekarang > TahunLahir && BulanLahir >= BulanSekarang && TanggalSekarang >= TanggalLahir) {
         cout << "UMUR ANDA SAAT INI\n"
              << tahun2 << " tahun " << bulan3 << " bulan " << Tanggal1 << " hari " << endl;
      } else if (TahunSekarang > TahunLahir && BulanSekarang >= BulanLahir && TanggalLahir >= TanggalSekarang) {
         cout << "UMUR ANDA SAAT INI\n"
              << tahun1 << " tahun " << bulan1 << " bulan " << Tanggal3 << " hari " << endl;
      } else {
         cout << "data yang anda masukkan salah" << endl;
      }
   } else {
      cout << "data yang anda masukkan tidak sesuai" << endl;
   }
   return 0;
}