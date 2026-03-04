#include <stdio.h>  // Diperlukan untuk fungsi input/output seperti scanf dan printf

int main() {
    int n;           // Variabel untuk menyimpan jumlah bilangan yang akan dimasukkan
    int num;         // Variabel untuk menyimpan setiap bilangan yang dibaca
    int min_val;     // Variabel untuk menyimpan nilai terkecil
    int max_val;     // Variabel untuk menyimpan nilai terbesar
    
    // Membaca nilai n dari pengguna, tanpa prompt
    scanf("%d", &n); 

    // Validasi sederhana untuk n
    if (n <= 0) {
        // Jika n tidak valid, program keluar tanpa output apa pun sesuai permintaan 'tidak ada kata kata lain'
        return 1; 
    }

    // Membaca bilangan pertama untuk inisialisasi, tanpa prompt
    scanf("%d", &num);
    min_val = num;     // Inisialisasi min_val dengan bilangan pertama
    max_val = num;     // Inisialisasi max_val dengan bilangan pertama

    // Memulai loop untuk membaca (n-1) bilangan berikutnya, tanpa prompt
    for (int i = 1; i < n; i++) {
        scanf("%d", &num); // Membaca setiap bilangan

        // Logika pencarian nilai terkecil
        if (num < min_val) {
            min_val = num;
        }

        // Logika pencarian nilai terbesar
        if (num > max_val) {
            max_val = num;
        }
    }

    // Menampilkan hasil sesuai spesifikasi, hanya nilai numerik
    printf("%d\n", min_val);
    printf("%d\n", max_val);

    return 0; // Mengindikasikan program berhasil dieksekusi
}
