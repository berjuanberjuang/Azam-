#include <iostream>
#include <string>

// Struktur untuk menyimpan data biodata
struct Biodata {
    std::string nama;
    std::string tempat_lahir;
    std::string tanggal_lahir;
    std::string alamat;
    std::string email;
};

int main() {
    Biodata saya;
    saya.nama = "Azam Ardiansyah";
    saya.tempat_lahir = "Sumatera Utara";
    saya.tanggal_lahir = "7 aplir 2010";
    saya.alamat = "Jl.  nurul Huda";
    saya.email = "";

    // Menampilkan biodata ke konsol
    std::cout << "==================================" << std::endl;
    std::cout << "poto saya" << std::endl;
    std::cout << "==================================" << std::endl;
    std::cout << "Nama           : " << saya.nama << std::endl;
    std::cout << "Tempat, Tgl.Lahir: " << saya.tempat_lahir << ", " << saya.tanggal_lahir << std::endl;
    std::cout << "Alamat         : " << saya.alamat << std::endl;
    std::cout << "Email          : " << saya.email << std::endl;
    std::cout << "==================================" << std::endl;

    return 0;
}
