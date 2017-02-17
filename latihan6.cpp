#include <iostream>
using namespace std;

int main() {
    
    typedef double dua;
       
    cout << "Ukuran Char : " << sizeof(char) << endl;
    cout << "Ukuran Int : " << sizeof(int) << endl;
    cout << "Ukuran Short Int : " << sizeof(short int) << endl;
    cout << "Ukuran Long Int : " << sizeof(long int) << endl;
    cout << "Ukuran Float : " << sizeof(float) << endl;
    cout << "Ukuran Double : " << sizeof(dua) << endl;
    cout << "Ukuran WChar_t : " << sizeof(wchar_t) << endl;
    
    return (0);
}