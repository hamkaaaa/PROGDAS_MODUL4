#include <iostream>
//anjaaaaaaaaaaay
//okokokkokk

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

    return 0;
}
