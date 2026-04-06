#include <iostream>
using namespace std;

struct DetailAlamat
{
    string desa;
    string kota;
}

struct Orang
{
    string nama;
    DetailAlamat;
    int umur;
};

int  main () {
    Orang mhs;
    //mengisi data
    cout << "mengisi data" << endl;
    cout << "nama : " ;
    cin >> mhs.nama;
    cout << "Alamat : " ;
    cin >> mhs.alamat;
    cout << "umur : " ;
    cin >> mhs.umur;
    cout << endl;
    // tampilkan
    cout << "Menampilkan Data" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Alamat : " << mhs.alamat << endl;
    cout << "Umur : " << mhs.umur << endl;
}
