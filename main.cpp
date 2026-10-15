#include <iostream>
using namespace std;
int main() {
    string nama, sekolah, ulang;
    do{
        cout<<"Masukkan nama anda"<<endl;
        cin>>nama;
        cout<<"Masukkan nama sekolah anda"<<endl;
        cin>>sekolah;
        cout<<"Nama anda adalah ";
        cout<<nama<<endl;
        cout<<"Sekolah anda adalah ";
        cout<<sekolah<<endl;
        cout<<"Apakah anda mau mengulang? Tekan y atau Y "<<endl;
        cin>>ulang;
    } while (ulang=="y"|| ulang=="Y");
    system ("pause");
    return 0;
}
