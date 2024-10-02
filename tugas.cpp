#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

string getPilihan() {
    string pilihan;
    cout << "Masukkan pilihan Anda (gunting, batu, kertas): ";
    cin >> pilihan;
    return pilihan;
}

