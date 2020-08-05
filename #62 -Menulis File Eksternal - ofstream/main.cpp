#include <iostream>
#include <fstream> // ofstream, ifstream, fstream

using namespace std;

int main(){
	
	ofstream myFile;

	// ios::out = default, operasi output;
	// ios::app = menuliskan pada akhir baris;
	// ios::trunc = default, membuat file jika tidak ada, dan kalau ada akan dihapus;

	myFile.open("data3.txt", ios::app); // append
	myFile << "\nMenuliskan pada data3";
	myFile.close();

	int a = 1234567;
	myFile.open("data1.txt");
	myFile << "Menuliskan pada data1\n";
	myFile << a;
	myFile.close();

	myFile.open("data2.txt");
	myFile << "\nMenuliskan pada data2";
	myFile.close();

	return 0;
}