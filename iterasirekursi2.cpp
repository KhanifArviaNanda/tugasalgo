//rekursi

#include <iostream>
using namespace std;

void numberfuction(int i) {
	cout << "the number is: " << i << endl;
	i++; // penghenti
	
	if(i<10) {
		numberfuction(i);
	}
}

int main() {
	int i = 0;
	numberfuction(i);
	return 0;
}
