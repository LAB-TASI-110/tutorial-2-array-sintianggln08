#include <stdio.h> // Diperlukan untuk fungsi input/output seperti printf dan scanf

int main() {
    int n;          // Variabel untuk menyimpan jumlah bilangan yang akan dimasukkan
    int num;        // Variabel untuk menyimpan setiap bilangan yang dibaca
    int min_val;    // Variabel untuk menyimpan nilai terkecil
    int max_val;    // Variabel untuk menyimpan nilai terbesar

    // Langkah 1 & 8: Meminta input untuk jumlah N
    printf("Selamat datang di program pencari nilai Min/Max!\n");
    printf("-----------------------------------------------\n");
    printf("Masukkan jumlah baris masukan berikutnya (n): ");
    scanf("%d", &n); // Membaca nilai n dari pengguna

    // Validasi sederhana untuk n agar tidak crash jika n <= 0,
    // meskipun prompt awal tidak secara eksplisit memintanya, ini adalah praktik baik.
    if (n <= 0) {
        printf("Jumlah masukan (n) harus bilangan bulat positif.\n");
        return 1; // Mengakhiri program dengan kode error
    }

    // Langkah 4: Memulai loop untuk membaca n bilangan
    // Langkah 3: Inisialisasi min_val dan max_val dengan bilangan pertama yang dibaca
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &num); // Membaca bilangan pertama
    min_val = num;     // Inisialisasi min_val dengan bilangan pertama
    max_val = num;     // Inisialisasi max_val dengan bilangan pertama

    // Lanjutkan membaca (n-1) bilangan berikutnya
    for (int i = 1; i < n; i++) {
        printf("Masukkan bilangan ke-%d: ", i + 1);
        scanf("%d", &num); // Membaca setiap bilangan

        // Langkah 6: Logika pencarian nilai terkecil
        if (num < min_val) {
            min_val = num;
        }

        // Langkah 6: Logika pencarian nilai terbesar
        if (num > max_val) {
            max_val = num;
        }
    }

    // Langkah 7: Menampilkan hasil sesuai spesifikasi
    printf("\n-----------------------------------------------\n");
    printf("Hasil:\n");
    printf("Nilai terkecil: %d\n", min_val);
    printf("Nilai terbesar: %d\n", max_val);

    return 0; // Mengindikasikan program berhasil dieksekusi
}
