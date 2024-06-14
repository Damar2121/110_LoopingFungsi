#include <iostream>
#include <string>
#include <vector>

class Proyek;

class Karyawan {
public:
    Karyawan(const std::string& nama) : nama(nama) {}
    void tambahProyek(Proyek* proyek);
    void daftarProyek() const;

private:
    std::string nama;
    std::vector<Proyek*> proyek;
};

class Proyek {
public:
    Proyek(const std::string& nama) : nama(nama) {}
    const std::string& getNama() const { return nama; }

private:
    std::string nama;
};

void Karyawan::tambahProyek(Proyek* proyek) {
    this->proyek.push_back(proyek);
}

void Karyawan::daftarProyek() const {
    std::cout << "Daftar Proyek Karyawan " << nama << std::endl;
    for (const auto& p : proyek) {
        std::cout << p->getNama() << std::endl;
    }
}

int main() {
    Proyek sistemInformasi("Sistem Informasi");
    Proyek sistemKeamanan("Sistem Keamanan");

    Karyawan budi("Budi");
    Karyawan andi("Andi");

    budi.tambahProyek(&sistemInformasi);
    budi.tambahProyek(&sistemKeamanan);

    andi.tambahProyek(&sistemInformasi);

    std::cout << "Daftar Karyawan Proyek " << sistemInformasi.getNama() << std::endl;
    budi.daftarProyek();
    andi.daftarProyek();

    return 0;
}
