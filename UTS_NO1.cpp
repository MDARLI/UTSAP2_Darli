#include <iostream>
#include <string>

using namespace std;

char hitungNilaiAkhir(int tugas, int quis, int uts, int uas) {
    double nilai_akhir = 0.15 * tugas + 0.15 * quis + 0.3 * uts + 0.4 * uas;

    if (nilai_akhir >= 85) {
        return 'A';
    } else if (nilai_akhir >= 70) {
        return 'B';
    } else if (nilai_akhir >= 55) {
        return 'C';
    } else if (nilai_akhir >= 40) {
        return 'D';
    } else {
        return 'E';
    }
}

int main() {
    string nama, nim, kom, mata_kuliah, dosen_pa;
    int nilai_tugas, nilai_quis, nilai_uts, nilai_uas;

    cout << "Masukkan nama          : ";
    getline(cin, nama);
    cout << "Masukkan NIM           : ";
    getline(cin, nim);
    cout << "Masukkan kom           : ";
    getline(cin, kom);
    cout << "Masukkan Mata Kuliah   : ";
    getline(cin, mata_kuliah);
    cout << "Masukkan Nilai Tugas   : ";
    cin >> nilai_tugas;
    cout << "Masukkan Nilai Quis    : ";
    cin >> nilai_quis;
    cout << "Masukkan Nilai UTS     : ";
    cin >> nilai_uts;
    cout << "Masukkan Nilai UAS     : ";
    cin >> nilai_uas;
    cout << "Masukkan Nama Dosen PA : ";
    cin.ignore();
    getline(cin, dosen_pa);

    char nilai_akhir = hitungNilaiAkhir(nilai_tugas, nilai_quis, nilai_uts, nilai_uas);

    cout << "\nOutput:" << endl;
    cout << "Nama           : " << nama << endl;
    cout << "NIM            : " << nim << endl;
    cout << "KOM            : " << kom << endl;
    cout << "Mata Kuliah    : " << mata_kuliah << endl;
    cout << "Nilai          : " << nilai_akhir << endl;
    cout << "Dosen PA       : " << dosen_pa << endl;

    return 0;
}