#include <iostream>
using namespace std;

typedef struct {
	string hari;
	string bulan;
	int tahun;
	
}	tanggal;

typedef struct {
	int jam;
	int menit;
	int detik;

}	jam;

typedef struct {
	int noKA;
	string kotaAsalKA;
	jam jamBerangkat;
	tanggal TanggalBerangkat;
	string kotatujuanKA;
	jam jamTiba;
	tanggal TanggalTiba;

}	jadwalKA;

int main() {
	jadwalKA jadwalKeretaApi;

	jadwalKeretaApi.noKA = 1 ;
	jadwalKeretaApi.TanggalBerangkat.hari = " senin ";
	jadwalKeretaApi.TanggalBerangkat.bulan = " januari ";
	jadwalKeretaApi.TanggalBerangkat.tahun = 2017;
	jadwalKeretaApi.kotaAsalKA ="yogyakarta" ;
	jadwalKeretaApi.jamBerangkat.jam = 10;
	jadwalKeretaApi.jamBerangkat.menit =45 ;
	jadwalKeretaApi.jamBerangkat.detik = 33;


	jadwalKeretaApi.noKA = 1 ;
	jadwalKeretaApi.TanggalTiba.hari = " selasa ";
	jadwalKeretaApi.TanggalTiba.bulan = " januari ";
	jadwalKeretaApi.TanggalTiba.tahun = 2017;
	jadwalKeretaApi.kotatujuanKA ="semarang" ;
	jadwalKeretaApi.jamTiba.jam = 06;
	jadwalKeretaApi.jamTiba.menit =10;
	jadwalKeretaApi.jamTiba.detik = 30;


	cout << " No " << jadwalKeretaApi.noKA << endl;
	cout << jadwalKeretaApi.TanggalBerangkat.hari << jadwalKeretaApi.TanggalBerangkat.bulan << jadwalKeretaApi.TanggalBerangkat.tahun << endl;
	cout << " Kota Asal " << jadwalKeretaApi.kotaAsalKA << endl;
	cout << " jam berangkat "  <<  jadwalKeretaApi.jamBerangkat.jam <<":" << jadwalKeretaApi.jamBerangkat.menit <<"." << jadwalKeretaApi.jamBerangkat.detik << endl;

	cout << " No " << jadwalKeretaApi.noKA << endl;
	cout << jadwalKeretaApi.TanggalTiba.hari << jadwalKeretaApi.TanggalTiba.bulan << jadwalKeretaApi.TanggalTiba.tahun << endl;
	cout << " Kota Tujuan " << jadwalKeretaApi.kotatujuanKA << endl;
	cout << " jam tiba " << jadwalKeretaApi.jamTiba.jam <<":" << jadwalKeretaApi.jamTiba.menit << "." << jadwalKeretaApi.jamTiba.detik << endl;

	return 0;
}
