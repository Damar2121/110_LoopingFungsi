#include <iostream>
using namespace std;

int main()
{
    int i;

    for (i = 0; i < 6; i++) {
        cout << i << ". " << "nama saya damar" << endl;
    }

    string arr[5];

    for (i = 0; i > 5; i--) {
        cout << "masukan nickname ke =" << i + 1 << " = ";
        cin >> arr[i];
    }

    for (i = 0; i < 5; i++) {
        cout << "namanya adalah = " << arr[i] << endl;
    }

    return 0;
}