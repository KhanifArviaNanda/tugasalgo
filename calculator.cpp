#include <iostream>
using namespace std;

class calculator {
	public:
	//data
	int x;
	int y;
	
	int tambah (int x, int y) {
		return x + y;
	}
	int kurang (int x, int y) {
		return x - y;
	}
	int kali (int x, int y) {
		return x * y;
	}
	int bagi (int x, int y) {
		return x / y;
	}
};
int main() {
	calculator casio;
	cout << "masukan nilai x : " ;
	cin >> casio.x;
	
	cout << "masukan nilai y : " ;
	cin >> casio.y;
	cout << endl;
	
	cout << "hasilnya pertambahan x dan y adalah:" << casio.tambah(casio.x, casio.y) << endl;
	cout << "hasilnya pengurangan x dan y adalah:" << casio.kurang(casio.x, casio.y) << endl;
	cout << "hasilnya pengkalian x dan y adalah:" << casio.kali(casio.x, casio.y) << endl;
	cout << "hasilnya pembagian x dan y adalah:" << casio.bagi(casio.x, casio.y) << endl;
	
	return 0;
}