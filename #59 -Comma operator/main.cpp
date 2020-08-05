#include <iostream>
#include <string>

using namespace std;

void printData(int val){
	cout << val << endl;
}

int main(){
	
	int a, b, c;

	a = (b = 1, printData(b), c = 2, printData(c), (b + c));

	cout << a << endl;
	
	return 0;
}