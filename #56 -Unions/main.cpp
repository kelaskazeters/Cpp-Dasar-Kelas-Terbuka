#include <iostream>
#include <string>

using namespace std;

union nama{
	int int_value;
	char char_value[4];

};

int main(){
	
	nama Rafan;

	Rafan.int_value = 12345642;

	cout << "data int_value: " << Rafan.int_value << endl;
	cout << "data char_value: " << Rafan.char_value << endl;

	Rafan.char_value[0] = 'a';
	Rafan.char_value[1] = 'b';
	Rafan.char_value[2] = 'c';
	Rafan.char_value[3] = 'd';

	cout << "data int_value: " << Rafan.int_value << endl;
	cout << "data char_value: " << Rafan.char_value << endl;

	return 0;
}