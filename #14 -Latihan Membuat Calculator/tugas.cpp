#include <iostream>

using namespace std;

int tugas()
{
    float a,b,hasil;
    char aritmatika;

    cout << "Selamat Datang Di Program Calculator! \n \n";

    // memasukkan input dari user
    cout << "Masukkan nilai pertama : ";
    cin >> a;
    cout << "Pilih operator +, -, *, / : ";
    cin >> aritmatika;
    cout << "Masukkan nilai kedua : ";
    cin >> b;

    cout << "\nHasil perhitungan: ";
    cout << a << " " << aritmatika << " " << b;

    switch(aritmatika){
        case '+':
            hasil = a + b;
            break;

        case '-':
            hasil = a - b;
            break;

        case '*':
            hasil = a * b;
            break;

        case '/':
            hasil = a / b;
            break;
        default:
            cout << "Masukkan operator yang benar!!";
    }

    cout << " = " << hasil << endl;

    return 0;
}
