#include <iostream>
using namespace std;

void numberfuction(int i) {
	cout << "The number is: " << i << endl;
}
int main() {
	for(int i=0; i<10; i++) {
		numberfuction (i) ;
	}
	return 0;
}
