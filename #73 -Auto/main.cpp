#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

template<typename T, typename U>
auto max(T a, U b){
	return (a > b) ? T(a) : U(b);
}

int main(){

	int a = 19;
	string b = "test";
	double c = 15.212;
	float d = 16.5f;
	auto e = max(d,a);

	cout << a << "\tTipe: " << typeid(a).name() << endl;
	cout << b << "\tTipe: " << typeid(b).name() << endl;
	cout << c << "\tTipe: " << typeid(c).name() << endl;
	cout << d << "\tTipe: " << typeid(d).name() << endl;
	cout << e << "\tTipe: " << typeid(e).name() << endl;
	return 0;
}