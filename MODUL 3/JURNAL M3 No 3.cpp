#include <iostream>

using namespace std;
int main () {
	int univ, pip, uni;
	char hrf;
	string save;
	cout<<"==== Program Menghilangkan Karakter ====="<<endl;
    cout<<"========================================="<<endl<<endl;
	cout<<"Masukkan Jumlah Universe\t: ";
	cin>>uni;
	cout<<"Masukkan Jumlah Orang\t\t: ";
	cin>>pip;
	cout<<"Masukkan Huruf\t\t\t: ";
	cin>>hrf;
	char hrfBesar = hrf-32;

	string universe[uni][pip];
	for (int i = 0; i<uni; i++) {
		cout<<"\nUniverse "<<i+1<<endl;
		for (int j = 0; j < pip; j++) {
			cout<<"Orang- "<<j+1<<" : ";
			if(j == 0 && i == 0) {
				getline(cin,universe[i][j]);
			}
			getline(cin,universe[i][j]);
		}
	}
	for(int i = 0; i<uni; i++) {
		cout<<"\nUniverse "<<i+1<<endl;
		for(int j = 0; j<pip ; j++) {
			string simpan;
			for(int k = 0; k<universe[i][j].size(); k++) {
				if(universe[i][j][k] != hrf && universe[i][j][k] != hrfBesar) {
					simpan+=universe[i][j][k];
				}
			}
			universe[i][j]=simpan;
		}

		for (int n = 0; n < pip; n++) {

			int k=n+1;
			if (k<pip && universe[i][n]==universe[i][k]) {
				int jm;
				jm=universe[i][k].length();
				for (int y = 0; y < jm; y++) {
					(universe[i][k])[y]=127;
				}
				save=universe[i][k];
			}
			if (n<(pip-1)&&universe[i][pip-1]==universe[i][n]) {
				int jm;
				jm=universe[i][pip-1].length();
				for (int y = 0; y < jm; y++) {
					(universe[i][pip-1])[y]=127;
				}
				save=universe[i][pip-1];
			}
		}
		for (int m = 0; m < pip; m++) {
			if ((universe[i][m])[0]!=127) {
				cout<<universe[i][m]<<endl;
			}


		}
	}
	return 0;
}





