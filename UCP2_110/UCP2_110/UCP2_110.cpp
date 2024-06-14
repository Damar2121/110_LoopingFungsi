#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Karyawan {
public:
    Karyawan(string& nama) : nama(nama){}
    void tambahProyek(Proyek* proyek);
    void daftarProyek();

private:
    string nama;
    vector<Proyek*> proyek;
};

class Proyek {
public:
    Proyek(string& nama) : nama(nama) {}
     string& getNama() { return nama; }

private:
    string nama;
};

void Karyawan::tambahProyek(Proyek* proyek) {
    this->proyek.push_back(proyek);
}

void Karyawan::daftarProyek() {
    cout << "Daftar Proyek Karyawan " << nama << endl;
    for ( auto& a : proyek) {
        cout << a->getNama() << endl;
    }
}

int main() {
    Karyawan* varkaryawan1 = new Karyawan("Budi");
    Karyawan* varkaryawan2 = new Karyawan("Andi");
}

