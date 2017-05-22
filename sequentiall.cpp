#include<iostream>

using namespace std;
int main() {
    
    //Kamus
    int data[] = {5,10,15,20,25,30,35,40,45,50};
    int cari;
    
    //Input Pencarian Angka
    cout << "Masukan Angka Yang Anda Cari : ";
    cin >> cari;
    
    //Proses
    int ia = 0;
    while ( ia < sizeof(data) / sizeof(*data) && data[ia] != cari) ia++;
    
    //Menampilkan Hasil
    if ( ia != sizeof(data) / sizeof(*data)) {
        
        cout << "Angka di Temukan di Index[" << ia << "]" << endl;
        cout << "Angka di Dalam Index[" << ia << "] Adalah = " << data[ia] << endl;
        
    } else {
    
        cout << "Angka Tidak di Temukan" << endl; 
    }
	return 0;
}