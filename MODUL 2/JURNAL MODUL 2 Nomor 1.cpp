#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    int l, m, n, o;
    cout<<"masukkan rentang kolom\t: "; cin>>n;
     o=n;
    for (l=-1; l>=-o; l--){
        n--;
        for (m=l+1; m<=n; m++){
            cout<<setw(3)<<abs(m);
        }
        cout<<endl;
    }
    return 0;
}