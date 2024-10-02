#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

string pilihan() {
    string pilihan;
    cout << "Masukkan pilihan Anda (gunting, batu, kertas): ";
    cin >> pilihan;
    return pilihan;
}

string komputer() {
    int random = rand() % 3;
    if (random == 0) return "gunting";
    else if (random == 1) return "batu";
    else return "kertas";
}

string pemenang(string pemain, string komputer) {
    if (pemain == komputer) return "Seri!";
    else if ((pemain == "gunting" && komputer == "kertas") || 
             (pemain == "batu" && komputer == "gunting") || 
             (pemain == "kertas" && komputer == "batu")) {
        return "Anda menang!";
    } else {
        return "Komputer menang!";
    }
}

void hasil(string pilihanPemain, string pilihanKomputer, string result) {
    cout << "Pilihan Anda: " << pilihanPemain << endl;
    cout << "Pilihan komputer: " << pilihanKomputer << endl;
    cout << "Hasil: " << result << endl;
}

int main() {
    string pilihanPemain, pilihanKomputer, result;
    char restart;

    srand(time(0));

    do {
        pilihanPemain = pilihan();
        pilihanKomputer = komputer();
        result = pemenang(pilihanPemain, pilihanKomputer);
        hasil(pilihanPemain, pilihanKomputer, result);
        cout << "Ingin bermain lagi? (y/n): ";
        cin >> restart;

    } while (restart == 'y' || restart == 'Y');

    cout << "Terima kasih telah bermain!" << endl;

    return 0;
}
