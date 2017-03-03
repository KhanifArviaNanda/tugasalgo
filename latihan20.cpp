#include <iostream>
using namespace std;

int main() {
	char nama;
	cout << "masukan alfabet awal nama anda:";
	cin >> nama;
	switch (nama) {
		case'A': cout << "nama saya amir" << endl;
		break;
		case'R': cout << "nama saya ridwan" << endl;
		break;
		case'B': cout << "nama saya Rina" << endl;
		break;
		case'J': cout << "nama saya juwita" << endl;
		break;
		default : cout << " tidak ada nama" << endl;
	}
	return 0;
}