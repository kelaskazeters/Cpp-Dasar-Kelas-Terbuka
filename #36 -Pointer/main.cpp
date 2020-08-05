#include <iostream>
using namespace std;

int main()
{
	int a = 5;

	// pointer
	int *aPtr = nullptr;
	aPtr = &a;

	// int a mempunyai niali dan adress ( alamat )

	cout << "Nilai dari a : " << a << endl;
	cout << "Alamat dari a : " << aPtr << endl;

	// dereferencing, mengambil data sari sebuah pointer
	a = 10;
	cout << "Mengambil nilai dair pointern aPtr : " << *aPtr << endl;

	return 0;
}