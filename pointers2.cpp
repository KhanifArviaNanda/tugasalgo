#include <iostream>
using namespace std;
int main() {
	int A = 20;
	int *p;
	
	p = &A;
	cout << "nilai dari A: ";
	cout << A << endl;
	
	cout << "alamat variabel A: ";
	cout << p << endl;
	
	cout << "alamat variabel *p :";
	cout << *p << endl;
	cout << "nilai dari *p: ";
	cout << *p << endl;
	
	return 0;
}