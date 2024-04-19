#include <iostream>

using namespace std;

int main() {
    int pilihan;

    cout << "Daftar Calon Presiden:" << endl;
    cout << "1. Soekarno" << endl;
    cout << "2. Soeharto" << endl;
    cout << "3. Bj. Habibie" << endl;
   
    cout << "Masukkan Pilihan Presiden anda: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Pilihan anda telah disimpan, pilihan anda adalah 1. Soekarno" << endl;
            break;
        case 2:
            cout << "Pilihan anda telah disimpan, pilihan anda adalah 2. Soeharto" << endl;
            break;
        case 3:
            cout << "Pilihan anda telah disimpan, pilihan anda adalah 3. Bj. Habibie" << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
    }

    return 0;
}