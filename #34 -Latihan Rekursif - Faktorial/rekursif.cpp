#include <iostream>
using namespace std;

// Prototype
int faktorial(int n);

int main(){
	int angka, hasil;
	cout << "Menghitung faktorial : ";
	cin >> angka;

	hasil = faktorial(angka);
	cout << "nilai faktorialnya adalah : " << hasil << endl;

	return 0;
}

int faktorial(int n){
	if (n <= 1){
		cout << n;
		return n;
	}else{
		cout << n << "*";
		return n * faktorial(n - 1);
	}
}