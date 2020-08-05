#include <iostream>

using namespace std;

int main(){
	
	// typedef adalah memberikan alias untuk tipe data
	typedef int I;
	typedef int iVector2D[2];
	typedef unsigned long ulong;
	typedef double vector[2];

	using numbers = double;

	I a = 10;
	iVector2D b = {1, 2};
	ulong c = 919023823;
	vector d = {10.123, 15.123};
	numbers e = 122113.21;

	cout << "Nilai a : " << a << endl;
	cout << "Nilai b : " << b[0] << " & " << b[1] << endl;
	cout << "Nilai c : " << c << endl;
	cout << "Nilai d : " << d[0] << " & " << d[1] << endl;
	cout << "Nilai e : " << e << endl;
	return 0; 
}