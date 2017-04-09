#include <iostream>
using namespace std;

int main () {
	int k =0;
	string array[10];
	cout << "Masukan Elemen Array" << endl;
	
	for (int i= 0; i<10; i++) {
		cout << "Element" << i+1 << " = ";
		cin >> array[i];
	}
	cout << "Masing masing elemen" << endl ;
	
	for (int i = 0; i<10; i++) {
		if (array[i] == "A") {
			k++;
		}
			cout << "elemen" << i+1 << " = " << array[i] << endl;
	}
		cout << "jumlah kemunculan elemen A = " << k;
		return 0;
		
	}
