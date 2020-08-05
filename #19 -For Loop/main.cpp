#include <iostream>

using namespace std;

int main()
{
    cout << "Loop 1 \n";
    for(int i = 1; i <= 10; i++){
        cout << i << endl;
    }

    cout << "\nLoop2 \n";
    for(int i = 1; i <= 10; i += 2){
        cout << i << endl;
    }

    cout << "\nLoop3 \n";
    for(int i = 1; i >= -10; i--){
        cout << i << endl;
    }

    cout << "\nLoop4 \n";

    int total = 0;
    for(int i = 1; i <= 10; i++, total += i){
        cout << i << " || " << total << endl;
    }

    return 0;
}
