# Pratikum Algoritma-Pemograman
Bagian ini berfungsi untuk menjelaskan part dari jobsheets Algoritma Pemograman yang telah diberikan oleh dosen pengampu. Penjelasan terdapat pada link tertera dibawah.

🧑‍🏫Dosen       : Randi Proska Sandra, M.Sc<br>
⏱Seksi kelas : INF1.62.1008<br>
🧕🏻Mahasiswa   : Bunga Aprillia<br>
🧮Nim         : 23343030<br>
📌Prodi       : Informatika<br>

# Jobsheets #
[Jobsheet 1 - Pengantar Algoritma dan Pemrograman](https://github.com/bngaa/PRATIKUM-ALGORITMA-PEMROGRAMAN/tree/main/Jobsheet%201%20-%20%20Algoritma%2C%20Pemrograman%20%20IDE)<br>
[Jobsheet 2 - Pemrograman Dasar C](https://github.com/bngaa/PRATIKUM-ALGORITMA-PEMROGRAMAN/tree/main/Jobsheet%202%20-%20Pemrograman%20Dasar%20C)<br>
[Jobsheet 3 - Variabel, Konstanta dan Tipe Data](https://github.com/bngaa/PRATIKUM-ALGORITMA-PEMROGRAMAN/tree/main/Jobsheet%203%20-%20Variabel%2C%20Konstanta%20%20Tipe%20Data)<br>
[Jobsheet 4 - Operator](https://github.com/bngaa/PRATIKUM-ALGORITMA-PEMROGRAMAN/tree/main/Jobsheet%204%20-%20Operator)<br>
[Jobsheet 5 - Flow Control (Decision Making)](https://github.com/bngaa/PRATIKUM-ALGORITMA-PEMROGRAMAN/tree/main/Jobsheet%205%20-%20Flow%20Control%20(Decision%20Making))<br>
[Jobsheet 6 - Flow Control (Looping)](https://github.com/bngaa/PRATIKUM-ALGORITMA-PEMROGRAMAN/tree/main/Jobsheet%206%20-%20Flow%20Control%20(Loop))<br>
[Jobsheet 7 - Array](https://github.com/bngaa/PRATIKUM-ALGORITMA-PEMROGRAMAN/tree/main/Jobsheet%207%20-%20Array)<br>
[Jobsheet 8 - Fungsi dan Prosedur](https://github.com/bngaa/PRATIKUM-ALGORITMA-PEMROGRAMAN/tree/main/Jobsheet%208%20-%20Fungsi%20%20Prosedur)<br>
[Jobsheet 9 - Pointer](https://github.com/bngaa/PRATIKUM-ALGORITMA-PEMROGRAMAN/tree/main/Jobsheet%209%20-%20Pointer)<br>
[Jobsheet 10 - Enumerasi dan Structure](https://github.com/bngaa/PRATIKUM-ALGORITMA-PEMROGRAMAN/tree/main/Jobsheet%2010%20-%20Enumerasi%20%20Structure)<br>
[Jobsheet 11 - File Handling in C](https://github.com/bngaa/PRATIKUM-ALGORITMA-PEMROGRAMAN/tree/main/Jobsheet%2011%20-%20FIle%20Handling%20in%20C)<br>

# Penjelasan Source Code #
**Penjelasan Jobsheet 1**<br>
Algoritma adalah urutan langkah-langkah yang disusun secara sistematis dan logis. Pemrograman adalah penggunaaan satu atau lebih algoritme yang saling berhubungan dengan menggunakan suatu bahasa pemrograman tertentu sehingga menjadi suatu program komputer. Bahasa pemrograman merupakan kumpulan aturan sintaks dan semantik yang dipakai untuk mendefinisikan program komputer. Pada pembahasan kali ini akan mendalami mengenai bahasa C.

C adalah sebuah bahasa pemrograman general-purpose dan imperative yang mendukung pemrograman terstruktur dan rekursif. Seperti teknologi yang terus berkembang, begitu juga dengan bahasa C. Terdapat berbagai versi dari bahasa ini yaitu ANSI C dan ISO C, C99, C11, dan C18.

IDE dalah software atau perangkat lunak yang digunakan oleh programmer untuk membuat sebuah program komputer atau sebagai tempat pengembangan aplikasi. IDE memiliki banyak fitur yang mendukung proses pemrograman. Contohnya adalah DevC++, Microsoft Visual Studio, CodeBlocks, NetBeans, Eclips, dll.

**Penjelasan source code Jobsheet 2**
**1. Soal Nomor 1<br>**
-	#include <stdio.h>
Baris ini mengimpor pustaka standar input-output (stdio.h), yang diperlukan untuk menggunakan fungsi-fungsi seperti printf dan scanf.

-	int main() {
Ini adalah fungsi utama dari program C. Fungsi main adalah titik awal eksekusi program. Fungsi ini mengembalikan nilai bertipe integer kepada sistem operasi, di mana nilai 0 menandakan bahwa program telah berjalan dengan sukses.

-	char nama[100];
Baris ini mendeklarasikan sebuah array bernama nama dengan tipe data char dan ukuran 100. Array ini akan digunakan untuk menyimpan nama yang dimasukkan oleh pengguna.

-	// Menampilkan pesan permintaan nama
printf("Hello, nama : ");
Baris ini menggunakan fungsi printf untuk menampilkan pesan "Hello, nama : ", yang berfungsi sebagai permintaan kepada pengguna untuk memasukkan namanya.

-	// Membaca input nama dari pengguna
scanf("%99[^\n]", nama);
Baris ini menggunakan fungsi scanf untuk membaca input dari pengguna. Format spesifikasi "%99[^\n]" digunakan untuk membaca sebuah string dengan panjang maksimal 99 karakter, dan tidak membaca karakter newline (\n). Input yang diberikan oleh pengguna akan disimpan dalam array nama.

-	// Menampilkan pesan selamat datang
printf("Selamat Datang %s dalam Pemrograman C!\n", nama);
Baris ini menggunakan fungsi printf lagi untuk menampilkan pesan selamat datang, dengan menyertakan nama yang telah dimasukkan oleh pengguna.

-	return 0;
}
Baris ini menandakan akhir dari fungsi main. Pernyataan return 0; mengindikasikan bahwa program telah berakhir dengan sukses kepada sistem operasi.


**2. Soal Nomor 2**
-	#include <stdio.h>: 
  Mengimpor pustaka standar input-output (stdio.h) yang dibutuhkan untuk menggunakan fungsi-fungsi seperti printf dan scanf.

- char nama[100], program_studi[100], fakultas[100];: 
Mendeklarasikan variabel berupa array karakter untuk menyimpan nama, program studi, dan fakultas dengan kapasitas masing-masing 100 karakter.

-	char nim[20];: 
Mendeklarasikan variabel untuk menyimpan NIM dengan kapasitas 20 karakter.

-	float nilai_praktikum, uts, uas, nilai_akhir;: 
Mendeklarasikan variabel berupa float untuk menyimpan nilai praktikum, UTS, UAS, dan nilai akhir.

-	Input data mahasiswa menggunakan scanf dengan format %[^\n]s, yang memungkinkan pengguna memasukkan string dengan spasi.

-	// Menghitung nilai akhir berdasarkan bobot : 
Komentar yang menjelaskan bahwa nilai akhir dihitung dengan bobot tertentu untuk setiap komponennya.

-	Menghitung nilai akhir dengan rumus tertentu dan menyimpan hasilnya dalam variabel nilai_akhir.

-	Menampilkan nilai akhir beserta informasi mahasiswa menggunakan printf.

-	return 0;: Menandakan bahwa program telah berakhir dengan sukses.
  

**3. Soal Nomor 3**
-	#include <stdio.h> :
Mengimpor pustaka standar input-output (stdio.h), yang dibutuhkan untuk menggunakan fungsi printf untuk menampilkan hasil.

-	int main(): Fungsi utama program C dimulai di sini.

-	double alas = 8.0; dan double tinggi = 5.0; :
Mendeklarasikan dua variabel bertipe double (bilangan desimal) untuk menyimpan panjang alas dan tinggi segitiga.

-	double luasSegitiga = 0.5 * alas * tinggi; : 
Menghitung luas segitiga menggunakan rumus luas segitiga yaitu 0.5 * alas * tinggi, dan hasilnya disimpan dalam variabel luasSegitiga.

-	printf("Luas segitiga : %.2lf cm^2\n", luasSegitiga); : 
Menampilkan hasil luas segitiga dengan menggunakan fungsi printf. Format specifier %.2lf digunakan untuk membatasi output desimal menjadi dua angka di belakang koma.

-	return 0;: 
Menandakan bahwa program telah berakhir dengan sukses.


**4. Soal Nomor 4**
-	#include <stdio.h> : Mengimpor pustaka standar input-output (stdio.h), yang dibutuhkan untuk menggunakan fungsi printf untuk menampilkan hasil.

-	int main() : Fungsi utama program C dimulai di sini.

-	double panjang = 10; dan double lebar = 5; : Mendeklarasikan dua variabel bertipe double (bilangan desimal) untuk menyimpan panjang dan lebar persegi panjang.

-	double luasPersegiPanjang = panjang * lebar; : Menghitung luas persegi panjang menggunakan rumus luas = panjang * lebar, dan hasilnya disimpan dalam variabel luasPersegiPanjang.

-	printf("Luas Persegi Panjang : %.2lf cm^2\n", luasPersegiPanjang); : Menampilkan hasil luas persegi panjang dengan menggunakan fungsi printf. Format specifier %.2lf digunakan untuk membatasi output desimal menjadi dua angka di belakang koma.

-	return 0; : Menandakan bahwa program telah berakhir dengan sukses.

