#include <stdio.h>  // Diperlukan untuk fungsi input/output seperti scanf dan printf
#include <float.h>  // Diperlukan untuk DBL_MAX dan DBL_MIN, nilai double terbesar/terkecil untuk inisialisasi

int main() {
    int n;           // Variabel untuk menyimpan jumlah bilangan yang akan dimasukkan
    int num;         // Variabel untuk menyimpan setiap bilangan yang dibaca
    int min_val;     // Variabel untuk menyimpan nilai terkecil
    int max_val;     // Variabel untuk menyimpan nilai terbesar
    
    int prev_num;    // Variabel untuk menyimpan bilangan sebelumnya untuk perhitungan rata-rata
    double min_avg = DBL_MAX; // Variabel untuk menyimpan rata-rata terendah, diinisialisasi dengan nilai maksimum double
    double max_avg = DBL_MIN; // Variabel untuk menyimpan rata-rata tertinggi, diinisialisasi dengan nilai minimum double
    
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
    prev_num = num;    // Simpan bilangan pertama sebagai prev_num

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
        
        // Logika pencarian rata-rata terendah dan tertinggi dari dua bilangan berurutan
        double current_avg = (double)(prev_num + num) / 2.0;
        
        if (current_avg < min_avg) {
            min_avg = current_avg;
        }
        
        if (current_avg > max_avg) {
            max_avg = current_avg;
        }

        prev_num = num; // Perbarui prev_num untuk iterasi berikutnya
    }

    // Menampilkan hasil sesuai spesifikasi, hanya nilai numerik
    printf("%d\n", min_val);
    printf("%d\n", max_val);
    
    // Tampilkan rata-rata hanya jika n >= 2
    if (n >= 2) {
        printf("%.2f\n", min_avg);
        printf("%.2f\n", max_avg);
    }
    // Jika n < 2, tidak ada output untuk rata-rata, sesuai permintaan 'tidak ada kata kata lain'

    return 0; // Mengindikasikan program berhasil dieksekusi
}
