#include <iostream>
using namespace std;

//Prototye 

void swap (int x, int y);

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

void swap (int x, int y) {

    int temp;
    
    temp = x;
    x = y;
    y = temp;
    
    return;
}