#include <iostream>
using namespace std;

struct DetailAlamat
{
    string desa;
    string kota;
};

struct Orang
{
    string nama;
    DetailAlamat alamat;
    int umur;
};

int  main () {
    Orang mhs[3];
    for (int i = 0;i <=2; i++)
    //mengisi data
    cout << "mengisi data" << endl;
    cout << "nama : " ;
    getline(cin,mhs[i].nama);
    cout << "desa : " ;
    getline(cin,mhs[i].alamat.desa);
    cout << "kota : " ;
    getline(cin,mhs[i].alamat.kota);
    cout << "umur : " ;
    cin >> mhs[i].umur;
    cout << endl;
    // tampilkan
    cout << "Menampilkan Data" << endl;
    cout << "Nama : " << mhs[i].nama << endl;
    cout << "Alamat : " << mhs[i].alamat.desa << endl;
    cout << "Alamat : " << mhs[i].alamat.kota << endl;
    cout << "Umur : " << mhs[i].umur << endl;
}