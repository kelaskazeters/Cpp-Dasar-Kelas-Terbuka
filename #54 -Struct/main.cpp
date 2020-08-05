#include <iostream>
#include <string>

using namespace std;

// Struct : data yang dibentuk oleh beberapa data

struct buah{
	string warna;
	float berat;
	int harga;
	string rasa;
};

int main(){
	
	buah apel;
	buah jeruk;

	apel.warna = "merah";
	apel.berat = 250.50f;
	apel.harga = 20000;
	apel.rasa = "manis kesat";

	jeruk.warna = "oranye";
	jeruk.berat = 150.50f;
	jeruk.harga = 10000;
	jeruk.rasa = "manis asam";

	cout << "======APEL======" << endl;
	cout << "warna: " << apel.warna << endl;
	cout << "berat: " << apel.berat << endl;
	cout << "harga: " << apel.harga << endl;
	cout << "rasa: " << apel.rasa << endl;

	cout << "\n======JERUK======" << endl;
	cout << "warna: " << jeruk.warna << endl;
	cout << "berat: " << jeruk.berat << endl;
	cout << "harga: " << jeruk.harga << endl;
	cout << "rasa: " << jeruk.rasa << endl;


	return 0;
}