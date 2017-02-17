#include <iostream>
using namespace std;

int tambah (int a, int b);
int kurang (int a, int b);
int kali (int a, int b);
int bagi1 (int a, int b);
int bagi2 (int a, int b);
    
    
int main () {

    int a,b ;
    
    cout << "Masukan Nilai A : ";
    cin >> a;
    
    cout << "Masukan Nilai B : "; 
    cin >> b;
    
    cout << endl;
    
    cout << "Hasil Pertambahan A dan B adalah " << tambah (a, b) << endl; 

    cout << "Hasil Pengurangan A dan B adalah " << kurang (a, b) << endl;

    cout << "Hasil Perkalian A dan B adalah " << kali (a, b) <<endl;
	
    cout << "Hasil Pembagian A dan B adalah " << bagi1 (a, b) <<endl;

    cout << "Hasil Sisa Pembagian A dan B adalah " << bagi2 (a, b) <<endl;
    return 0;
}

int tambah (int a, int b) {
    return a + b;
}

int kurang (int a, int b) {
    return a - b;
}

int kali (int a, int b) {
    return a * b;
}
    
int bagi1 (int a, int b) {
    return a / b;
}

int bagi2 (int a, int b) {
    return a % b;
}