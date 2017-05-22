#include<iostream>
using namespace std;

int main() {
    
    //Kamus
    int K[10] = {5,10,15,20,25,30,35,40,45,50};
    int cari, ia, ib, tengah;
    
    //Input Pencarian Angka
    cout << "Masukan Angka Yang Anda Cari : ";
    cin >> cari;
    
    //Proses
    ia = 0; //Batas Kiri
    ib = 9; //Batas Kanan
    tengah = (ia+ib)/2; //Batas Tengah
    
    while (ia <= ib) {
        if (K[tengah] == cari) {
            cout << "Data Di Temukan di Indeks ke " << tengah;
            break; } 
        
        else if (K[tengah] < cari) { ia = tengah + 1; }
        else { ib = tengah - 1;}
        
        tengah = (ia+ib)/2;
    }
    
    if (ia > ib) {
        
        cout << "Data tidak ditemukan";
    }
}