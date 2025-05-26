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