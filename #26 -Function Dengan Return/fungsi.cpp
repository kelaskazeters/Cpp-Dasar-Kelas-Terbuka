#include <iostream>
using namespace std;


int kuadrat(int x){ // fungsi kembalian
	int y;
	y = x*x;
	return y;
}

int tambah(int a, int b){
	int y;
	y = a + b;
	return y;
}

int main(int argc, char const *argv[]){

	int input, hasil, a, b, hasil2;
	cout << "nilai kuadrat dari : ";
	cin >> input;

	hasil = kuadrat(input);

	cout << hasil << endl;

	cout << "Masukkan nilai a : ";
	cin >> a;
	cout << "Masukkan nilai b : ";
	cin >> b;

	hasil2 = tambah(a, b);
	cout << hasil2 << endl;

	return 0;
}