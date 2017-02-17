#include <iostream>
#include "lib.h" //Memangil file lib.h (h itu kita panggil sebagai header)

using namespace std;

int main () {

        int a = 100;
        int b = 200;
    
    cout << "Before swap, value is A : " << a <<endl;
    cout << "Before swap, value is B : " << b <<endl;
    
    swap (a,b);
    
    cout << "After swap, value is A : " << a <<endl;
    cout << "After swap, value is B : " << b <<endl;
    
    return 0;
}