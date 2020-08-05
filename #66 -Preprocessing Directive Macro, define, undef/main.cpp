// preprocessing directive
#include <iostream>

// macro merubah nilai dengan nama
#define PI 3.14159265359
#define BAHASA "Indonesia"

// macro untuk fungsi
#define KUADRAT(X) (X*X)
#define MAX(A,B) ((A > B) ? A:B) 

// akhir dari preprocessing directive

using namespace std;

int main(){

	cout << "Nilai PI: " << PI << endl;
	cout << "Bahasa: " << BAHASA << endl;
	cout << "Kuadrat: " << KUADRAT(6) << endl;
	cout << "Max: " << MAX(5,4) << endl;

	#undef BAHASA
	#define BAHASA "Japanese"
	cout << BAHASA << endl;

	return 0;
}