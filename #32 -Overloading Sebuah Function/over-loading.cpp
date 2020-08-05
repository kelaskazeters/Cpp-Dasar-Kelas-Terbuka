#include <iostream>
using namespace std;

// overloading

// basic function
int luas_kotak(int p, int l){
	int luas = p * l;
	return luas;
}

double luas_kotak(double s){
	return s * s;
}

// overload function
int luas_kotak(int s){
	int luas = s * s;
	return luas;
}

int main(){
	cout << "Luas kotak 2x3 : " << luas_kotak(2, 3) << endl;
	cout << "Luas kotak 2x2 : " << luas_kotak(2) << endl;
	cout << "Luas kotak 2.5x2.5 : " << luas_kotak(2.5) << endl;
	return 0;
}