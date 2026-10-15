using namespace std;
#include <iostream>
string nama;
string sekolah;
void sapa()
{
cout<<"Selamat datang"<<endl;
}
void user()
{
cout<<"Masukkan nama"<<endl;
cin>>nama;
}
void school()
{
    cout<<"Masukkan nama sekolah"<<endl;
    cin>>sekolah;
}
int main() {
    sapa();
    user();
    school();
    return 0;
}
