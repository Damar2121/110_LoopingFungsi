#include <iostream>
#include <string>
#include <vector>

class proyek;

class karyawan {
public:
	karyawan(const std::string& nama) : nama(nama){}
		void tambahproyek(proyek* proyek);
	void daftarproyek() const;

private:
	std::string nama;
	std::vector<proyek*> proyek;
	
};

class proyek {
public:
	proyek(const std::string& nama) : nama(nama){}
	const std::string& getNama() const { return nama; }

private:
	std::string nama;
};

void karyawan::tambahproyek(proyek* proyek) {
	this->proyek.push_back(proyek);
};

void karyawan::daftarproyek() const {
	std::cout << "daftar proyek karyawan" << nama << endl;
	for (const auto& p : proyek) {
		std::cout << p->getNama() << std::endl;
	}
}



