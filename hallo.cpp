#include <iostream>
#include <string>
using namespace std;

int main (){
  int jumlahNama;

    // Meminta pengguna memasukkan jumlah nama
    cout <<"Masukkan jumlah nama yang akan diproses: ";
    cin >> jumlahNama;

    // Validasi input
    if (jumlahNama <=0){
      cout << "Jumlah nama harus lebih dari 0!-" <<endl;
      return 1;

    // Membersihkan karakter newline sisa dari cin >> Jumlahnama
    cin.ignore();

    // Inisialisasi array dinamis dengan jumlah nama
    string* nama = new string [jumlahNama];

  // Menampilkan data dari array
     cout <<"\nDaftar Nama yang Dimasukkan:" << endl;
     for (int i = 0; i < jumlahNama; i++){
      cout << "Nama ke-" << i + 1 << ":";
      getline(cin, nama[i]);
     }

     // Membersihkan memori yang dialokasikan
     delete[] nama;

     return 0;
}