#include <iostream>
using namespace std;

int main() {
    // deklarasi dengan inisialisasi
    int aku [5] = {10,20,30,40,50};
    // deklarasi array tanpa inisialisasi
    int kamu [5];
    // tampilkan data (membaca data array)
    cout << "Data pada index 1 = "<< aku[1] << endl;
     // ganti index ke 1 (membaca data array)
     aku[1] =200;
     cout << endl;
     cout <<"data pada index 1 = " << aku[1] << endl;
      //mengisi satu per satu
       cout << "data index 0 = ";
       cin >> kamu [0];
       cout << "data index 1 = ";
       cin >> kamu[1];
       cout << "data index 2 = ";
       cin >> kamu [2];
       cout << " data index 3 = ";
       cin >> kamu[3];
       cout << "data index 4 = ";
       cin >> kamu[4];
       cout << endl;
      // menampilkan satu per satu
      cout << "data pertama = " << kamu[0] << endl;
      cout << "data kedua = " << kamu[1] << endl;
      cout << " data ketiga = " << kamu[2] << endl;
      cout << "data keempat = " << kamu [3] << endl;
      cout << "data kelima = " << kamu[4] << endl;
      cout << endl;
      // mengisi dengan mengunakan perulangan for
      for (int i = 0; i <= 4; i++)
      {
        cout << "Data index ke-" << i << " = ";
        cin >> kamu [i];
      }
    cout << endl;
     //menampilkan dengan mengunakan perulangan for
     for (int i = 0; i <= 4; i++)
     {
        cout << " data ke-" << i+1 << " = " << kamu [i] << endl;
     }
    }
