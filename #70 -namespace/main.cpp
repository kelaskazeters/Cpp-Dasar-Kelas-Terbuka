#include <iostream>
#include "ucup.h"

void fungsi2(){
	std::cout << "Ini adalah fungsi biasa" << std::endl;
}

int main(){
	fungsi2();
	std::cout << ucup::b << std::endl;
	ucup::fungsi();
	ucup::cout(102);
	return 0;
}