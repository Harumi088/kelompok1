#include <iostream>
#include <cmath>
using namespace std;

// Fungsi untuk menghitung biaya tiket berdasarkan jumlah stasiun yang dilewati
double hitungBiayaTiket(int jumlahStasiun) {
    // Tarif dasar per stasiun
    const double tarifPerStasiun = 5000.0;
    
    // Menghitung total biaya
    double totalBiaya = jumlahStasiun * tarifPerStasiun;
    
    return totalBiaya;
}

// Fungsi untuk memeriksa validitas stasiun
bool validStasiun(int stasiun) {
    return stasiun >= 1 && stasiun <= 5;
}



int main() {
    int stasiunAwal, stasiunTujuan;

    // Menampilkan pesan selamat datang
    cout << "Selamat Datang di stasiun Indonesia" << endl;
    
    // Menampilkan informasi tarif per stasiun dan pilihan stasiun
    cout << "Silahkan pilih tujuan anda" << endl;
    cout << "Tarif Per-Stasiun adalah Rp5000" << endl;
    cout << "1. Stasiun A" << endl;
    cout << "2. Stasiun B" << endl;
    cout << "3. Stasiun C" << endl;
    cout << "4. Stasiun D" << endl;
    cout << "5. Stasiun E" << endl;

    cout << endl;
    
    cout << "Stasiun awal: ";
    cin >> stasiunAwal;

    if (!validStasiun(stasiunAwal)) {
        cout << "Stasiun yang anda pilih tidak ada." << endl;
        return 1;
    }
    
    cout << "Stasiun tujuan: ";
    cin >> stasiunTujuan;
    
    if (!validStasiun(stasiunTujuan)) {
        cout << "Stasiun yang anda tuju tidak ada." << endl;
        return 1;
    }

        // Menghitung jumlah stasiun yang dilewati termasuk stasiun awal
    int jumlahStasiun = abs(stasiunTujuan - stasiunAwal) + 1;
    
    double biayaTiket = hitungBiayaTiket(jumlahStasiun);
    
    cout << "Biaya tiket dari stasiun " << stasiunAwal << " ke stasiun " << stasiunTujuan << " adalah: Rp" << biayaTiket << endl;
    
    // Mengucapkan terima kasih
    cout << "Terima kasih telah menggunakan layanan kami!" << endl;
    
    return 0;

}