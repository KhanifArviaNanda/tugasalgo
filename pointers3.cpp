#include <iostream>
using namespace std;
int main() {
	 //prototye
	int x, y;
	cout << "masukkan dua angka (pisahkan dengan spasi ex: 1 2) : " << endl;
	cin >> x >> y;
	cout << "sebelum melewati fungsi double_it" << endl;
	cout << " x \t = \t" << x << endl;
	cout << " y \t = \t" << y << endl;
	cout << "setelah melewati fungsi double_it" << endl;
	cout << "x \t = \t" << x << endl;
	cout << "y \t = \t" << y << endl;
	
	return 0;
}
	//prototye
	int double_it (int *x, int *y) {
		*x *= 2;
		*y *= 2;
		return 0;
	}