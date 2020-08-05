#include <iostream>

using namespace std;

int main()
{
    // assignment
    int a = 10;

    cout << "Nilai awal dari a = " << a << endl;

    // assignment operator
    // variable = variable operator ekspresi
    //     a    =     a        -       3
    // variable operator = ekspresi
    //    a        +=         3

    a += 3;
    cout << "Ditambah 3 = " << a << endl;

    a -= 3;
    cout << "Dikurangi 3 = " << a << endl;

    a *= 3;
    cout << "Dikali 3 = " << a << endl;

    a /= 3;
    cout << "Dibagi 3 = " << a << endl;

    a %= 3;
    cout << "Dimodulus 3 = " << a << endl;
    return 0;
}
