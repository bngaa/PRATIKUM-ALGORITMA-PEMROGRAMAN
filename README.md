# Pratikum Algoritma-Pemograman
Bagian ini berfungsi untuk menjelaskan part dari jobsheets Algoritma Pemograman yang telah diberikan oleh dosen pengampu. Penjelasan terdapat pada link tertera dibawah.

🧑‍🏫Dosen       : Randi Proska Sandra, M.Sc<br>
⏱Seksi kelas : INF1.62.1008<br>
🧕🏻Mahasiswa   : Bunga Aprillia<br>
🧮Nim         : 23343030<br>
📌Prodi       : Informatika<br>

# Jobsheets #
[Jobsheet 1 - Pengantar Algoritma dan Pemrograman](https://github.com/bngaa/PRATIKUM-ALGORITMA-PEMROGRAMAN/tree/main/Jobsheet%201%20-%20%20Algoritma%2C%20Pemrograman%20%20IDE)<br>
**A. Pengantar Algoritma**<br>
Algoritma adalah urutan langkah-langkah yang disusun secara sistematis dan logis untuk menyelesaikan masalah atau mencapai tujuan tertentu.
Memiliki awal dan akhir.

**B. Pemrograman**<br>
Pemrograman adalah tindakan atau aktivitas penulisan, pengujian, perbaikan, dan pemeliharaan kode komputer.
Pemrograman melibatkan algoritma dan bahasa pemrograman. Pemrograman adalah seni menggunakan algoritma dengan menggunakan bahasa pemrograman tertentu.

**C. Perbedaan Coding dan Programming**<br>
Coding: Menulis kode sesuai dengan aturan syntax bahasa pemrograman.<br>
Programming: Melibatkan coding, analisis, konsep, implementasi algoritma, dan pemecahan masalah.

**D. Bahasa Pemrograman**<br>
Adalah Instruksi standar untuk meminta komputer menjalankan fungsi tertentu.

**E. Pengenalan Bahasa C**<br>
Karateristik Bahasa C:
General-purpose, imperative, mendukung pemrograman terstruktur dan rekursif. 
Versi Bahasa C:
ANSI C, C99, C11, C18.

**F. IDE**<br>
IDE dalah software atau perangkat lunak yang digunakan oleh programmer untuk membuat sebuah program komputer atau sebagai tempat pengembangan aplikasi. IDE memiliki banyak fitur yang mendukung proses pemrograman. Contohnya adalah DevC++, Microsoft Visual Studio, CodeBlocks, NetBeans, Eclips, dll.<br><br>

[Jobsheet 2 - Pemrograman Dasar C](https://github.com/bngaa/PRATIKUM-ALGORITMA-PEMROGRAMAN/tree/main/Jobsheet%202%20-%20Pemrograman%20Dasar%20C)<br>
**A. Sintaks**<br>
Dalam bahasa pemrograman C, sintaks merupakan aturan penulisan kode yang harus diikuti.<br>
Struktur dasar program C terbagi menjadi dua bagian utama:
- Header Files :
Menggunakan #include untuk memasukkan file khusus (header file) yang berisi definisi fungsi-fungsi.
Header file berisi deklarasi fungsi-fungsi dasar yang digunakan dalam program.<br>
Contoh: #include <stdio.h> untuk mengimpor file stdio.h.
- Main Function :
Program C harus memiliki fungsi main(), fungsi ini dieksekusi pertama kali saat program dijalankan.
Isi fungsi main() diawali dan diakhiri dengan tanda kurung kurawal { dan }.
Fungsi main() harus mengembalikan nilai, biasanya return 0 atau void.<br>
Contoh:
int main (
    // isi program
    return 0;
  )
- Statement :
Statement adalah perintah atau fungsi untuk melakukan sesuatu.
Setiap statement diakhiri dengan titik koma (;).
- Identifier :
Nama yang digunakan untuk mengidentifikasi variabel, fungsi, atau item lain yang didefinisikan.<br>
Aturan penulisan: diawali huruf atau underscore, tidak boleh menggunakan karakter khusus, case sensitive, unik.
- Comments :
Komentar diabaikan oleh kompiler, digunakan untuk deskripsi atau dokumentasi.<br>
Satu baris: // komentar, Lebih dari satu baris: /* komentar */.
- Whitespaces :
Blank, tab, spasi, atau baris baru digunakan untuk memisahkan bagian dalam sebuah statement.<br>

**B. Proses Input & Output**
- Input adalah sesuatu data yang kita masukan ke dalam program. Input 
biasanya diambil dari perangakat inputan seperti keyboard, mouse, 
kamera, microphone, dll.
Algorithm & Programming
- Proses adalah langkah-langkah yang harus dilakukan program untuk 
menghasilkan output.
- Output adalah informasi yang dihasilkan setelah dilakukan proses. Output 
biasanya ditampilkan ke layar komputer

Ada dua macam fungsi yang bisa digunakan untuk menampilkan output
- Fungsi printf():
Digunakan untuk menampilkan output ke layar komputer.
Format specifier: %s (string), %d (desimal), \n (baris baru), dll.
Contoh: printf("Hello World!\n");.
- Fungsi puts():
Menampilkan output tanpa format.
Selalu membuat baris baru.
Contoh: puts("Hello World!");.

**C. Fungsi pada input C**<br>
- Fungsi scanf():
Mengambil input dari keyboard.
Format specifier digunakan untuk tipe data input.
Contoh: scanf("%d", &nilai);.
- Fungsi gets() dan fgets():
gets() (tidak disarankan): mengambil input dalam satu baris (unsafe).
fgets(): lebih aman, memungkinkan penentuan ukuran buffer.
Penting untuk menghindari penggunaan gets() karena dapat menyebabkan masalah buffer overflow pada program.<br><br>

[Jobsheet 3 - Variabel, Konstanta dan Tipe Data](https://github.com/bngaa/PRATIKUM-ALGORITMA-PEMROGRAMAN/tree/main/Jobsheet%203%20-%20Variabel%2C%20Konstanta%20%20Tipe%20Data)<br>
**Variabel :** <br>
Variabel adalah tempat menyimpan sebuah nilai, digunakan untuk menyimpan nilai sementara selama pemrosesan program komputer.
Dianalogikan sebagai kotak-kotak yang menyimpan nilai, di mana tipe data mewakili jenis objek yang disimpan dalam kotak-kotak tersebut.
Dalam bahasa C, variabel dibuat dengan menentukan tipe data diikuti oleh nama variabel.

**Aturan Penulisan Variabel dalam C:**
- tidak boleh dimulai dengan simbol atau angka.
- Tidak boleh menggunakan kata kunci yang sudah ada dalam C, seperti if, int, void, dll.
- Bersifat case-sensitive, artinya huruf besar dan huruf kecil dianggap berbeda.
- Disarankan menggunakan garis bawah untuk variabel yang terdiri dari dua kata.

**Tipe Data :**
- Delapan jenis tipe data utama dalam C: Char, Integer, Float, Array, Structure, Pointer, Enum, Void.
- Dapat dikelompokkan menjadi empat kategori: Char, Integer, Float, dan Double dianggap sebagai tipe data dasar.

**Tipe Data Dasar :**
- Char: Menyimpan satu karakter.
- Integer: Mewakili angka bulat.
- Float: Mewakili angka pecahan.
-  Double: Serupa dengan float tetapi dengan ukuran penyimpanan yang lebih besar.

**Format Penulisan untuk Float dan Double :**
Gunakan titik (.) sebagai pemisah desimal, mengikuti format internasional.

**Tipe Data Void :**
- Tipe data khusus yang menunjukkan tidak ada data.
- Tidak setara dengan nol (0); void menandakan ketiadaan data.

**Konversi Tipe Data :**
Proses mengubah satu tipe data menjadi tipe lain. 

**Konstanta :**
Nilai yang tetap dan tidak dapat diubah selama eksekusi program. Dua cara mendeklarasikan konstanta dalam C yaitu : menggunakan #define atau const.
Disarankan menggunakan huruf kapital untuk nama konstanta.<br><br>

[Jobsheet 4 - Operator](https://github.com/bngaa/PRATIKUM-ALGORITMA-PEMROGRAMAN/tree/main/Jobsheet%204%20-%20Operator)<br>
**Operator :** <br>
Operator adalah simbol yang digunakan untuk melakukan operasi tertentu. Terdapat tiga jenis operator berdasarkan jumlah operand-nya:
- Operator Unary (1 operand)
- Operator Binary (2 operand)
- Operator Ternary (3 operand) <br>

Operand adalah nilai asal yang digunakan dalam operasi, sedangkan Operator adalah instruksi untuk mendapatkan hasil dari operasi tersebut.

**Operator Aritmatika :** <br>
Operator aritmatika digunakan untuk operasi matematika.
- Penjumlahan (+)
- Pengurangan (-)
- Perkalian (*)
- Pembagian (/)
- Sisa Bagi (%) <br>

Pada operasi pembagian 7/2, hasilnya 3 karena operasi dilakukan terhadap tipe data integer. Jika menggunakan tipe data float, hasilnya akan 3.5.

**Operator Penugasan :** <br>
Operator penugasan memberikan tugas pada variabel, umumnya untuk mengisi nilai.
- Pengisian Nilai (=)
- Pengisian dan Penambahan (+=)
- Pengisian dan Pengurangan (-=)
- Pengisian dan Perkalian (*=)
- Pengisian dan Pembagian (/=)
- Pengisian dan Sisa bagi (%=) <br>

Contoh : b += a sama dengan b = b + a.

**Operator Pembanding :** <br>
Operator pembanding membandingkan dua nilai.
- Lebih Besar (>)
- Lebih Kecil (<)
- Sama Dengan (==)
- Tidak Sama dengan (!=)
- Lebih Besar Sama dengan (>=)
- Lebih Kecil Sama dengan (<=)<br>

Hasilnya berupa true (1) atau false (0).

**Operator Logika :** <br>
Operator logika digunakan untuk operasi logika.
- Logika AND (&&)
- Logika OR (||)
- Negasi (!)<br>

Contoh: Pernyataan 1 && Pernyataan 2 menghasilkan true jika keduanya true.

**Operator Bitwise :** <br>
Operator bitwise melakukan operasi berdasarkan bit (biner) dari nilai.
- AND (&)
- OR (|)
- XOR (^)
- NOT (~)
- Left Shift (<<)
- Right Shift (>>) <br>

Contoh: Bitwise AND dari 6 dan 3 menghasilkan 2.

**Operator Lain-lain :**
- Alamat memori (&)
- Pointer (*)
- Ternary ( ? : )
- Increment (++)
- Decrement (--)<br>

Operator increment dan decrement dapat ditaruh di depan atau di belakang variabel. Digunakan pada blok perulangan.<br><br>

[Jobsheet 5 - Flow Control (Decision Making)](https://github.com/bngaa/PRATIKUM-ALGORITMA-PEMROGRAMAN/tree/main/Jobsheet%205%20-%20Flow%20Control%20(Decision%20Making))<br>
**Pengambilan Keputusan (Decision Making):** <br>
Cara mengubah jalur eksekusi melalui program disebut aliran kontrol atau Flow Control. Dalam C, terdapat pernyataan aliran kontrol yang memungkinkan pemrogram untuk mengubah jalur eksekusi normal. Ini juga dikenal sebagai percabangan atau struktur kondisi. Ada beberapa jenis pernyataan untuk pengambilan keputusan :

- Pernyataan if :
Pernyataan percabangan if hanya memiliki satu blok pilihan saat kondisi benar.<br>
contoh : if (total_belanja > 100000) {
    printf("Selamat, Anda dapat bonus diskon!");
}

- Pernyataan if else :
Pernyataan if/else memiliki dua blok pilihan, satu untuk kondisi benar dan satu untuk kondisi salah.<br>
contoh : if (password_benar) {
    printf("Selamat datang bos!");
} else {
    printf("Password salah, coba lagi!");
}

- Pernyataan if else if :
Pernyataan if/else if memiliki lebih dari dua blok pilihan.<br>
contoh : if (nilai >= 80) {
    grade = 'A';
} else if (nilai >= 60) {
    grade = 'B';
} else {
    grade = 'C';
}

- Pernyataan Switch Case :
Pernyataan switch case membandingkan nilai dengan serangkaian case dan menjalankan blok kode yang sesuai.<br>
contoh : switch (nilai) {
    case 'A':
        // kode untuk nilai A
        break;
    case 'B':
    case 'E':
        // kode untuk nilai B dan E
        break;
    default:
        // kode jika tidak ada case yang cocok
}

- Percabangan Operator Ternary :
Penggunaan operator ternary merupakan bentuk singkat dari if/else.<br>
contoh : grade = (nilai >= 60) ? 'Lulus' : 'Gagal';

- Percabangan Bersarang :
Semua bentuk blok percabangan dapat ditempatkan di dalam percabangan lainnya (nested if).<br>
contoh : if (kondisi1) {
    if (kondisi2) {
        // kode untuk kedua kondisi terpenuhi
    }
}

[Jobsheet 6 - Flow Control (Looping)](https://github.com/bngaa/PRATIKUM-ALGORITMA-PEMROGRAMAN/tree/main/Jobsheet%206%20-%20Flow%20Control%20(Loop))<br>
**Perulangan (Loop) :**<br>
Perulangan adalah konstruksi aliran kontrol yang memungkinkan sebuah kode dieksekusi secara berulang kali hingga kondisi tertentu terpenuhi. Ini sangat efektif untuk membuat program ringkas dan mengulang tugas-tugas tertentu. Ada dua jenis perulangan: counted loop dan uncounted loop.

**Counted Loop (Perulangan Dihitung) :**
- Perulangan For :
Digunakan untuk perulangan yang sudah jelas berapa kali akan diulang.<br>
Contoh: Mencetak angka 0 hingga 9.<br>
for (int i = 0; i < 10; i++) {
    printf("%d ", i);
}<br>
Pada contoh, i digunakan sebagai counter yang dimulai dari 0, terus diulang selama i kurang dari 10, dan setiap perulangan i akan bertambah 1.
Variabel counter dapat memiliki nama lain.<br>
Contoh: Mencetak angka dari 10 hingga 0 (penghitungan mundur).
for (int counter = 10; counter > 0; counter--) {
    printf("%d ", counter);
}

- Perulangan While:
Digunakan untuk perulangan yang jumlah perulangannya tidak diketahui sebelumnya.<br>
Contoh: Perulangan untuk input ulang dengan kondisi tertentu.

**Uncounted Loop (Perulangan Tidak Dihitung) :** <br>
- Perulangan Do While :
Sama seperti perulangan while, namun diulang setidaknya satu kali sebelum kondisi dicek.<br>
Contoh: Input ulang dengan perulangan do while.<br>
char ulangi;
do {
    // kode yang akan diulang
    printf("Apakah Anda ingin mengulang? (y/n): ");
    scanf(" %c", &ulangi);
} while (ulangi == 'y');

- Perulangan Bersarang (Nested Loop) :
Perulangan di dalam perulangan, memungkinkan untuk membuat struktur perulangan yang lebih kompleks.<br>
Contoh: Perulangan bersarang untuk mencetak pola bintang.
for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
        printf("* ");
    }
    printf("\n");
}<br> <br>

[Jobsheet 7 - Array](https://github.com/bngaa/PRATIKUM-ALGORITMA-PEMROGRAMAN/tree/main/Jobsheet%207%20-%20Array)<br>
[Jobsheet 8 - Fungsi dan Prosedur](https://github.com/bngaa/PRATIKUM-ALGORITMA-PEMROGRAMAN/tree/main/Jobsheet%208%20-%20Fungsi%20%20Prosedur)<br>
[Jobsheet 9 - Pointer](https://github.com/bngaa/PRATIKUM-ALGORITMA-PEMROGRAMAN/tree/main/Jobsheet%209%20-%20Pointer)<br>
[Jobsheet 10 - Enumerasi dan Structure](https://github.com/bngaa/PRATIKUM-ALGORITMA-PEMROGRAMAN/tree/main/Jobsheet%2010%20-%20Enumerasi%20%20Structure)<br>
[Jobsheet 11 - File Handling in C](https://github.com/bngaa/PRATIKUM-ALGORITMA-PEMROGRAMAN/tree/main/Jobsheet%2011%20-%20FIle%20Handling%20in%20C)<br>


