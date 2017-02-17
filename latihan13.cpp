#include <iostream> 
#include "lib.h"
using namespace std;

int main ( ) {
	int a = 100;
	int b = 200;
	cout << "before swap, value of a :" << a << endl;
	cout << "before swap, value of b :" << b << endl;
	swap (a, b) ;
	cout << "after swap, valuse of a :" << a << endl;
	cout << "after swap, value of b :" << b << endl;
    return 0;
} 