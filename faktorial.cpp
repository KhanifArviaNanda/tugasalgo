#include <iostream>
using namespace std;

//prototye
long rekursifaktorial (int f);
 int main() {
	int x;
	int n = 4;
	cout << n << "! = " << rekursifaktorial(n) << endl;
	
	n = 9;
	cout << n << "! = " << rekursifaktorial(n) << endl;
	
	cout << "Masukan angka yang akan difaktorialkan : ";
	cin >> x;
	cout << x << "! " << rekursifaktorial (x) << endl;
	return 0;
 }
long rekursifaktorial(int f){
	if (f == 0)
	return 1;
	else
	return f *
rekursifaktorial (f - 1);
	}
