#include <iostream>
using namespace std;

int pangkat(int a, int b){
	int hasil = a;
	for(int i = 1; i < b; i++){
		hasil = hasil * a;
	}
	return hasil;
}

int pangkatRekursif(int a, int b){

	if (b <= 1){
		cout << "Akhir dari rekursif\n";
		return a;
	}else{
		cout << "rekursif\n";
		return a * pangkatRekursif(a, (b - 1));
	}
}

// fungsi rekursif terbatas
int main(){
	int a, b;
	cout << "Angka : ";
	cin >> a;
	cout << "Pangkat : ";
	cin >> b;
	cout << "Hasil iterasi : " << pangkat(a, b) << endl;
	cout << "Hasil rekursif : " << pangkatRekursif(a, b) << endl;

	return 0;
}