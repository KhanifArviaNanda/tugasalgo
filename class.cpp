#include <iostream>
using namespace std;

class manusia {
	public: //scope
			int tinggi;
			int beratBadan;
			string nama;
	private:
		string pacar;
	
	protected:
		string rahasia;
	public:	
	void makan () {
		cout << "makan" << endl;
	}
	void namapacar () {
		pacar = "arvi";
		cout << pacar << endl;
	}
	private:
	void tidur () {
		cout <<"tidur" << endl;
	}
};
 int main () {
	 manusia khanif;
	 khanif.tinggi = 160;
	 khanif.nama = " khanif " ;
	 cout << khanif.tinggi << endl;
	 cout << khanif.nama << endl;
	 khanif.makan();
	 manusia han;
	 han.tinggi = 150;
	 han.nama = "han" ;
	 cout << han.tinggi << endl;
	 cout << han.nama << endl;
	 han.makan();
	 return 0;
 }
	