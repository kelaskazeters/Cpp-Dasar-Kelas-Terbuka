#include <iostream>
#include <string>

using namespace std;

struct aktor{
	string nama;
	int tahun_lahir;
};

struct film{
	string judul;
	string genre;
	int tahun;
	// struct aktor
	aktor pemeran_1;
	aktor pemeran_2;
};

int main(){
	
	aktor aktor1, aktor2;
	film film1, film2;

	// buat aktor 1
	aktor1.nama = "Michael Rafan";
	aktor1.tahun_lahir = 1992;

	// buat aktor 2
	aktor2.nama = "Sandra Kurniawan";
	aktor2.tahun_lahir = 1995;

	// buat film
	film1.judul = "Pengabdi Wakanda";
	film1.genre = "Documenter";
	film1.tahun = 2018;
	film1.pemeran_1 = aktor1;
	film1.pemeran_2 = aktor2;

	film2.judul = "Dilan";
	film2.genre = "Action";
	film2.tahun = 2189;
	film2.pemeran_1 = aktor1;

	cout << film1.judul << endl;
	cout << film1.pemeran_1.nama << endl;
	cout << film1.pemeran_2.nama << endl;

	cout << film2.judul << endl;
	cout << film2.pemeran_1.nama << endl;
	cout << film2.pemeran_2.nama << endl;

	return 0;
}