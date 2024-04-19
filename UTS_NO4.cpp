#include<iostream>
using namespace std; // sebelumnya using std, tidak ada namespace

int main(){
    system("CLS");
    
    string a;

    umur: // sebelumnya ';' 
    
    cout << "Tebak Umur Saya : ";
    cin>> a ; //simbol sebelumnya menggunakan << dan itu terbalik karena untuk cout

    if (a == "20"){ // tanda '=' hanya 1 dan ditambah menjadi 20
                    // dan angka 20 diberi simbol ' "" ' agar menjadi string, karena variabel a berupa string
        cout << "Jawaban Anda Benar" << endl;
    } else{        //penggunaan else if yang berlebihan seharusnya else saja sudah cukup
        cout << "Jawaban Salah, Coba Lagi..." << endl;
        goto umur;
    }
    
    cout << "Program Selesai";

    return 0;
}
