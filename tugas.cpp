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

int main() {
    // Contoh penggunaan fungsi getPilihan
    string pilihanUser = getPilihan();
    cout << "Anda memilih: " << pilihanUser << endl;

    return 0;
}

