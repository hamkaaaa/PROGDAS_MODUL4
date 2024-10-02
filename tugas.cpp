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
