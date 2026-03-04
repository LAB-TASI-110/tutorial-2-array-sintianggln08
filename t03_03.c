#include <stdio.h>  // Diperlukan untuk fungsi input/output seperti printf dan scanf
#include <float.h>  // Diperlukan untuk DBL_MAX dan DBL_MIN, nilai double terbesar/terkecil untuk inisialisasi

int main() {
    int n;           // Variabel untuk menyimpan jumlah bilangan yang akan dimasukkan
    int num;         // Variabel untuk menyimpan setiap bilangan yang dibaca
    int min_val;     // Variabel untuk menyimpan nilai terkecil
    int max_val;     // Variabel untuk menyimpan nilai terbesar
    
    int prev_num;    // Variabel untuk menyimpan bilangan sebelumnya untuk perhitungan rata-rata
    double min_avg = DBL_MAX; // Variabel untuk menyimpan rata-rata terendah, diinisialisasi dengan nilai maksimum double
    double max_avg = DBL_MIN; // Variabel untuk menyimpan rata-rata tertinggi, diinisialisasi dengan nilai minimum double
    
    printf("Selamat datang di program pencari nilai Min/Max dan Rata-rata Berurutan!\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("Masukkan jumlah baris masukan berikutnya (n): ");
    scanf("%d", &n); // Membaca nilai n dari pengguna

    // Validasi sederhana untuk n
    if (n <= 0) {
        printf("Jumlah masukan (n) harus bilangan bulat positif.\n");
        return 1; // Mengakhiri program dengan kode error
    }

    // Membaca bilangan pertama untuk inisialisasi
    printf("Masukkan bilangan ke-1: ");
    scanf("%d", &num);
    min_val = num;     // Inisialisasi min_val dengan bilangan pertama
    max_val = num;     // Inisialisasi max_val dengan bilangan pertama
    prev_num = num;    // Simpan bilangan pertama sebagai prev_num

    // Memulai loop untuk membaca (n-1) bilangan berikutnya
    // Rata-rata hanya dihitung jika ada setidaknya dua bilangan
    for (int i = 1; i < n; i++) {
        printf("Masukkan bilangan ke-%d: ", i + 1);
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

    // Menampilkan hasil sesuai spesifikasi
    printf("\n--------------------------------------------------------------------------------\n");
    printf("Hasil:\n");
    printf("Nilai terkecil: %d\n", min_val);
    printf("Nilai terbesar: %d\n", max_val);
    
    // Tampilkan rata-rata hanya jika n >= 2
    if (n >= 2) {
        printf("Rata-rata terendah dari dua nilai berurutan: %.2f\n", min_avg);
        printf("Rata-rata tertinggi dari dua nilai berurutan: %.2f\n", max_avg);
    } else {
        printf("Tidak cukup bilangan untuk menghitung rata-rata dua nilai berurutan.\n");
    }

    return 0; // Mengindikasikan program berhasil dieksekusi
}
