#include <iostream>
using namespace std;

int nTelor, nMie, nAir, jumlah;
int hTelor = 2000, hMie = 2800, hAir = 3000;
string nama;

void input()
{
    cout << "masukan nama = ";
    cin >> nama;
    cout << "masukan jumlah telor = ";
    cin >> nTelor;
    cout << "masukan jumlah mie = ";
    cin >> nMie;
    cout << "masukan jumlah air mineral = ";
    cin >> nAir;

}

int hitungharga() {
    return (nTelor * hTelor) + (nMie * hMie) + (nAir * hAir);
}

void display() {
    cout << "nama = " << nama << endl;
    cout << "jumlah telor = " << nTelor << endl;
    cout << "jumlah mie = " << nMie << endl;
    cout << "jumlah air = " << nAir << endl;
    cout << "total harga Rp. " << hitungharga() << endl;
}

int main()
{
    char pilihan;
    do
    {
        input();
        display();

        cout << "apakah anda ingin mengulangi (y/n) ? ";
        cin >> pilihan;

        system("cls");

    } while (pilihan == 'y' || 'Y');


}