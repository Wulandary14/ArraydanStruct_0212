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
    Orang mhs;
    //mengisi data
    cout << "mengisi data" << endl;
    cout << "nama : " ;
    getline(cin,mhs.nama);
    cout << "desa : " ;
    getline(cin,mhs.alamat.desa);
    cout << "kota : " ;
    getline(cin,mhs.alamat.kota);
    cout << "umur : " ;
    cin >> mhs.umur;
    cout << endl;
    // tampilkan
    cout << "Menampilkan Data" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Alamat : " << mhs.alamat.desa << endl;
    cout << "Alamat : " << mhs.alamat.kota << endl;
    cout << "Umur : " << mhs.umur << endl;
}