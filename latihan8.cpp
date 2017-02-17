#include <iostream>
using namespace std;

int main () {

    int a = 21; 
    int b = 10; 
    int c;
    
if (a == b) {
cout << " Nilai A sama dengan Nilai B " << endl;
} else { cout << " Nilai A tidak sama dengan nilai B " << endl;
}

if (a < b) {
cout << " Nilai A lebih Kecil dari Nilai B " << endl;
} else { cout << " Nilai A Tidak lebih Kecil dari Nilai B " << endl;
}

if (a > b) {
cout << " Nilai A lebih Besar dari Nilai B " << endl;
} else { cout << " Nilai A Tidak lebih Besar dari Nilai B " << endl;
}

/* Ganti Nilai A dan Nilai B*/

    
    a = 5; 
    b = 20; 
    
if (a <= b) {
cout << " Nilai A Kurang dari Nilai B " << endl;
} 

if (b >= a) {
cout << " Nilai B Lebih Besar dari Nilai A " << endl;
} 

return 0;
}