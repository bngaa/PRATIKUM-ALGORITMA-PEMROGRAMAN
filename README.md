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

IDE dalah software atau perangkat lunak yang digunakan oleh programmer untuk membuat sebuah program komputer atau sebagai tempat pengembangan aplikasi. IDE memiliki banyak fitur yang mendukung proses pemrograman. Contohnya adalah DevC++, Microsoft Visual Studio, CodeBlocks, NetBeans, Eclips, dll.<br> <br>

**Penjelasan source code Jobsheet 2**<br>
**Soal Nomor 1<br>**
-	#include <stdio.h> :
Baris ini mengimpor pustaka standar input-output (stdio.h), yang diperlukan untuk menggunakan fungsi-fungsi seperti printf dan scanf.
-	int main() { : 
Ini adalah fungsi utama dari program C. Fungsi main adalah titik awal eksekusi program. Fungsi ini mengembalikan nilai bertipe integer kepada sistem operasi, di mana nilai 0 menandakan bahwa program telah berjalan dengan sukses.
-	char nama[100]; :
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

**Soal Nomor 2**
-	#include <stdio.h> : 
  Mengimpor pustaka standar input-output (stdio.h) yang dibutuhkan untuk menggunakan fungsi-fungsi seperti printf dan scanf.
- char nama[100], program_studi[100], fakultas[100]; : 
Mendeklarasikan variabel berupa array karakter untuk menyimpan nama, program studi, dan fakultas dengan kapasitas masing-masing 100 karakter.
-	char nim[20]; : 
Mendeklarasikan variabel untuk menyimpan NIM dengan kapasitas 20 karakter.
-	float nilai_praktikum, uts, uas, nilai_akhir;: 
Mendeklarasikan variabel berupa float untuk menyimpan nilai praktikum, UTS, UAS, dan nilai akhir.
-	Input data mahasiswa menggunakan scanf dengan format %[^\n]s, yang memungkinkan pengguna memasukkan string dengan spasi.
-	// Menghitung nilai akhir berdasarkan bobot : 
Komentar yang menjelaskan bahwa nilai akhir dihitung dengan bobot tertentu untuk setiap komponennya.
-	Menghitung nilai akhir dengan rumus tertentu dan menyimpan hasilnya dalam variabel nilai_akhir.
-	Menampilkan nilai akhir beserta informasi mahasiswa menggunakan printf.
-	return 0;: Menandakan bahwa program telah berakhir dengan sukses.
  

**Soal Nomor 3**
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

**Soal Nomor 4**
-	#include <stdio.h> : Mengimpor pustaka standar input-output (stdio.h), yang dibutuhkan untuk menggunakan fungsi printf untuk menampilkan hasil.
-	int main() : Fungsi utama program C dimulai di sini.
-	double panjang = 10; dan double lebar = 5; : Mendeklarasikan dua variabel bertipe double (bilangan desimal) untuk menyimpan panjang dan lebar persegi panjang.
-	double luasPersegiPanjang = panjang * lebar; : Menghitung luas persegi panjang menggunakan rumus luas = panjang * lebar, dan hasilnya disimpan dalam variabel luasPersegiPanjang.
-	printf("Luas Persegi Panjang : %.2lf cm^2\n", luasPersegiPanjang); : Menampilkan hasil luas persegi panjang dengan menggunakan fungsi printf. Format specifier %.2lf digunakan untuk membatasi output desimal menjadi dua angka di belakang koma.
-	return 0; : Menandakan bahwa program telah berakhir dengan sukses.<br> <br>
  
**Penjelasan source code Jobsheet 3**<br> <br>
**Soal Nomor 1 <br>**
- #include <stdio.h> : Mengimpor pustaka standar input-output (stdio.h), yang dibutuhkan untuk menggunakan fungsi printf dan scanf.
- int main(): Fungsi utama program C dimulai di sini.
- const double ntukar = 14.25;: Mendeklarasikan variabel konstanta ntukar dengan nilai 14.25. Konstanta ini digunakan untuk menentukan nilai tukar rupiah ke dollar.
- double rupiah;: Mendeklarasikan variabel rupiah sebagai input untuk menyimpan nominal uang dalam rupiah.
- printf("Masukkan nominal rupiah: ");: Menampilkan pesan permintaan untuk memasukkan nominal uang dalam rupiah.
- scanf("%lf", &rupiah);: Menggunakan scanf untuk membaca input nominal rupiah dari pengguna dan menyimpannya dalam variabel rupiah.
- double dollar = rupiah / ntukar;: Menghitung jumlah dollar berdasarkan nilai tukar. Hasilnya disimpan dalam variabel dollar.
- printf("Hasil %.2lf adalah $%.2lf", rupiah, dollar);: Menampilkan hasil konversi dalam format yang telah ditentukan, yaitu dua angka di belakang koma.
- return 0;: Menandakan bahwa program telah berakhir dengan sukses.

**Soal Nomor 2**
- #include <stdio.h> : Mengimpor pustaka standar input-output (stdio.h), yang dibutuhkan untuk menggunakan fungsi printf dan scanf.
- int main( ) : Fungsi utama program C dimulai di sini.
- float C, K, F, R; : Mendeklarasikan empat variabel bertipe float untuk menyimpan suhu dalam Celsius (C), Kelvin (K), Fahrenheit (F), dan Reamur (R).
- printf("Masukkan suhu (Celsius): "); : Menampilkan pesan permintaan untuk memasukkan suhu dalam Celsius.
- scanf("%f", &C); : Menggunakan scanf untuk membaca input suhu dalam Celsius dari pengguna dan menyimpannya dalam variabel C.
- Menghitung suhu dalam Kelvin (K = C + 273.15;), Fahrenheit (F = (C * 1.8) + 32;), dan Reamur (R = C * 0.8;).
- Menampilkan hasil konversi suhu dalam format yang telah ditentukan menggunakan printf.
- return 0 ;: Menandakan bahwa program telah berakhir dengan sukses.

**Soal Nomor 3**
- #include <stdio.h> : Mengimpor pustaka standar input-output (stdio.h), yang dibutuhkan untuk menggunakan fungsi printf dan scanf.
- int main() : Fungsi utama program C dimulai di sini.
- const double PI = 3.14; : Mendeklarasikan konstanta PI dengan nilai 3.14.
- double d, r, LP, volume; : Mendeklarasikan empat variabel bertipe double untuk menyimpan diameter (d), jari-jari (r), luas permukaan (LP), dan volume (volume).
- printf("Masukkan jari-jari lingkaran : "); : Menampilkan pesan permintaan untuk memasukkan jari-jari lingkaran.
- scanf("%lf", &r); : Menggunakan scanf untuk membaca input jari-jari lingkaran dari pengguna dan menyimpannya dalam variabel r.
- Menghitung luas permukaan bola (LP = 4.0 * PI * r * r;) dan volume bola (volume = (4.0 / 3.0) * PI * r * r * r;).
- Menampilkan hasil perhitungan luas permukaan dan volume dengan menggunakan printf.
- return 0;: Menandakan bahwa program telah berakhir dengan sukses.<br><br>

**Penjelasan source code Jobsheet 4<br>**
**Soal Nomor 1 <br>**
-	include <stdio.h> : Mengimpor pustaka standar input-output (stdio.h), yang dibutuhkan untuk menggunakan fungsi printf dan scanf.
-	int main() : Fungsi utama program C dimulai di sini.
-	int totalDetik, jam, menit, detikSisa; : Mendeklarasikan empat variabel bertipe int untuk menyimpan jumlah total detik (totalDetik), jumlah jam (jam), jumlah menit (menit), dan sisa detik (detikSisa).
-	printf("Masukkan jumlah waktu dalam detik: "); : Menampilkan pesan permintaan untuk memasukkan jumlah waktu dalam detik.
-	scanf("%d", &totalDetik); : Menggunakan scanf untuk membaca input jumlah waktu dalam detik dari pengguna dan menyimpannya dalam variabel totalDetik.
-	Menghitung jumlah jam (jam = totalDetik / 3600;) dengan membagi total detik oleh 3600 (karena 1 jam = 3600 detik).
-	Menghitung sisa detik setelah dihitung jam (totalDetik %= 3600;).
-	Menghitung jumlah menit (menit = totalDetik / 60;) dengan membagi sisa detik oleh 60 (karena 1 menit = 60 detik).
-	Menghitung sisa detik setelah dihitung menit (detikSisa = totalDetik % 60;).
-	printf("Hasil Output: %d Jam, %d Menit, %d Detik\n", jam, menit, detikSisa);: Menampilkan hasil konversi dalam format yang ditentukan.
-	return 0; : Menandakan bahwa program telah berakhir dengan sukses.

**Soal Nomor 2**

-	#include <stdio.h> : Mengimpor pustaka standar input-output (stdio.h), yang dibutuhkan untuk menggunakan fungsi printf dan scanf.
-	int main() : Fungsi utama program C dimulai di sini.
-	char namaPembeli[100]; , char namaBarang[100];, float hargaBarangSatuan;, int jumlahBarang;, float hargaTotal; : Mendeklarasikan beberapa variabel untuk menyimpan informasi nama pembeli, nama barang, harga barang satuan, jumlah barang, dan harga total pembelian.
-	Meminta pengguna memasukkan data pembelian menggunakan fungsi printf dan scanf.
-	Menghitung harga total pembelian dengan rumus hargaBarangSatuan * jumlahBarang dan menyimpannya dalam variabel hargaTotal.
-	Menampilkan struk pembelian dengan menggunakan fungsi printf. Informasi seperti nama pembeli, nama barang, harga barang satuan, jumlah barang, dan harga total ditampilkan dalam struk tersebut.
-	return 0; : Menandakan bahwa program telah berakhir dengan sukses.

**Soal Nomor 3**

-	#include <stdio.h>: Mengimpor pustaka standar input-output (stdio.h), yang dibutuhkan untuk menggunakan fungsi printf.
-	int main(): Fungsi utama program C dimulai di sini.

-	float nilaiPresensi = 85;, float nilaiPraktek = 65;, float nilaiUTS = 80;, float nilaiUAS = 75;: Mendeklarasikan dan memberikan nilai awal untuk variabel-variabel yang menyimpan nilai presensi, praktek, UTS, dan UAS.
-	float nilaiAkhir = (nilaiPresensi * 0.10) + (nilaiPraktek * 0.20) + (nilaiUTS * 0.30) + (nilaiUAS * 0.40);: Menghitung nilai akhir dengan menggunakan bobot yang sudah ditentukan untuk setiap komponen.
-	printf("Nilai Akhir: %.2f\n", nilaiAkhir);: Menampilkan nilai akhir dengan dua angka di belakang koma menggunakan fungsi printf.
-	return 0;: Menandakan bahwa program telah berakhir dengan sukses.

**Soal Nomor 4**

-	#include <stdio.h>: Mengimpor pustaka standar input-output (stdio.h), yang dibutuhkan untuk menggunakan fungsi printf.
-	int main(): Fungsi utama program C dimulai di sini.
-	int durasiFilm = 3;, float tarifPertama = 15000;, float tarifBerikutnya = 0.5 * tarifPertama;: Mendeklarasikan dan memberikan nilai awal untuk variabel yang menyimpan durasi film, tarif untuk jam pertama, dan tarif untuk jam berikutnya.
-	float totalBiaya;: Mendeklarasikan variabel untuk menyimpan total biaya penyewaan film.
-	if (durasiFilm == 1) { totalBiaya = tarifPertama; } else if (durasiFilm > 1) { totalBiaya = tarifPertama + (tarifBerikutnya * (durasiFilm - 1)); } else { printf("Durasi film harus lebih dari 0 jam.\n"); }: Mengecek durasi film dan menghitung total biaya sesuai dengan aturan tarif.
-	printf("Total biaya penyewaan film untuk %d jam: Rp %.2f\n", durasiFilm, totalBiaya);: Menampilkan total biaya penyewaan film dengan menggunakan fungsi printf dan format yang ditentukan.
-	return 0;: Menandakan bahwa program telah berakhir dengan sukses.<br> <br>

**Penjelasan source code Jobsheet 5**<br>
**Soal Nomor 1 <br>**
-	#include <stdio.h> : Mengimpor pustaka standar input-output (stdio.h), yang dibutuhkan untuk menggunakan fungsi printf dan scanf.
-	int main() : Fungsi utama program C dimulai di sini.
-	char op;, double angka1, angka2; : Mendeklarasikan variabel op untuk menyimpan operator dan angka1 serta angka2 untuk menyimpan dua angka yang akan dioperasikan.
-	Meminta pengguna memasukkan operator menggunakan printf dan scanf.
-	Meminta pengguna memasukkan dua angka menggunakan printf dan scanf.
-	Menggunakan switch untuk memilih operasi yang sesuai dengan operator yang dimasukkan.
-	Dalam setiap kasus (case), program akan melakukan operasi yang sesuai dan menampilkan hasilnya menggunakan printf.
-	Dalam kasus pembagian (case '/'), program juga melakukan pemeriksaan untuk menghindari pembagian oleh 0.
-	Jika operator tidak valid, program menampilkan pesan kesalahan.
-	return 0; : Menandakan bahwa program telah berakhir dengan sukses.

**Soal Nomor 2**

-	#include <stdio.h> : Mengimpor pustaka standar input-output (stdio.h), yang dibutuhkan untuk menggunakan fungsi printf dan scanf.
-	int main() : Fungsi utama program C dimulai di sini.
-	Variabel total_pembelian, diskon, dan cashback dideklarasikan untuk menyimpan total pembelian, jumlah diskon, dan jumlah cashback.
-	Meminta pengguna memasukkan total pembelian menggunakan printf dan scanf.
-	Menggunakan struktur kontrol if-else untuk mengevaluasi total pembelian dan menetapkan diskon dan cashback yang sesuai.
-	Menghitung total harga yang harus dibayar setelah memperhitungkan diskon dan cashback.
-	Menampilkan hasil pembelian, diskon, cashback, dan total harga yang harus dibayar menggunakan printf.
-	return 0; : Menandakan bahwa program telah berakhir dengan sukses.

**Soal Nomor 3**

-	#include <stdio.h> : Mengimpor pustaka standar input-output (stdio.h), yang dibutuhkan untuk menggunakan fungsi printf dan scanf.
-	int main() : Fungsi utama program C dimulai di sini.
-	Variabel pilihan untuk menyimpan pilihan rumus yang akan digunakan, dan luas untuk menyimpan hasil perhitungan luas permukaan.
-	User diminta memasukkan pilihan rumus melalui printf dan scanf.
-	Menggunakan struktur kontrol switch untuk mengevaluasi pilihan user.
-	Setiap case dalam switch meminta input sesuai dengan rumus yang dipilih, melakukan perhitungan, dan menyimpan hasilnya dalam variabel luas.
-	Jika pilihan tidak valid, program menampilkan pesan kesalahan.
-	Menampilkan hasil luas permukaan menggunakan printf.
-	return 0; : Menandakan bahwa program telah berakhir dengan sukses.

**Soal Nomor 4**

-	#include <stdio.h> : Mengimpor pustaka standar input-output (stdio.h), yang dibutuhkan untuk menggunakan fungsi printf dan scanf.
-	int main() : Fungsi utama program C dimulai di sini.
-	Variabel nilai_kehadiran, nilai_tugas, nilai_uts, dan nilai_uas untuk menyimpan nilai dari setiap komponen.
-	User diminta memasukkan nilai kehadiran, tugas, UTS, dan UAS menggunakan printf dan scanf.
-	Menghitung nilai akhir berdasarkan bobot yang diberikan.
- Menentukan kategori nilai berdasarkan rentang nilai menggunakan struktur kontrol if-else.
- Program memberikan feedback tambahan tergantung pada rentang nilai tertentu.
- Menampilkan nilai akhir dan kategori menggunakan printf.
- return 0; : Menandakan bahwa program telah berakhir dengan sukses.<br> <br>

**Penjelasan source code Jobsheet 6**<br>
**Soal Nomor 1 <br>**

-	#include <stdio.h>
  Baris ini adalah preprocessor directive yang menginstruksikan kompiler untuk
  menyertakan konten dari file header "stdio.h" ke dalam program. Header ini diperlukan
  untuk menggunakan fungsi input/output standar seperti printf.
-	int main(){
  Inisiasi fungsi main, yang merupakan fungsi utama yang akan dieksekusi ketika program dijalankan.
-	int i;
  Deklarasi variabel i sebagai variabel integer yang akan digunakan sebagai penghitung dalam loop.
-	printf("Deret bilangan genap: ");
  Mencetak pesan ke layar menggunakan fungsi printf. Pesan ini akan memberi tahu pengguna bahwa deret bilangan genap akan dicetak.
-	for (i=0 ;i<=50 ;i+=2) {
  printf("%d ",i);
  }
  Inisiasi loop for yang akan mencetak deret bilangan genap dari 0 hingga 50 dengan langkah 2 (karena bilangan genap selalu memiliki selisih 2 antara angka berikutnya).       Setiap angka dicetak menggunakan printf dengan format %d, dan diakhiri dengan spasi.
-	printf("\n");
  Mencetak karakter newline untuk membuat baris baru, sehingga output selanjutnya akan ditampilkan di baris baru.
-	printf("Deret bilangan ganjil: ");
  Mencetak pesan yang memberi tahu pengguna bahwa deret bilangan ganjil akan dicetak.

-	for (i=1 ;i<=50 ;i+=2){
  printf("%d ", i);
  }
  Sama seperti sebelumnya, loop for ini mencetak deret bilangan ganjil dari 1 hingga 50 dengan langkah 2. Setiap angka dicetak dengan format %d dan diakhiri dengan spasi.
-	printf("\n");
  Mencetak karakter newline lagi untuk membuat baris baru setelah deret bilangan ganjil selesai dicetak.
-	return 0;
  Mengembalikan nilai 0 dari fungsi main, menandakan bahwa program telah dijalankan dengan sukses. Ini juga dapat dianggap sebagai indikasi bahwa program telah berakhir       dengan benar.   

**Soal Nomor 2**

-	#include <stdio.h>
  Baris ini adalah preprocessor directive yang menginstruksikan kompiler untuk menyertakan konten dari file header "stdio.h" ke dalam program. Header ini diperlukan untuk     menggunakan fungsi input/output standar seperti printf.
-	int main(){
  Inisiasi fungsi main, yang merupakan fungsi utama yang akan dieksekusi ketika program dijalankan.
-	int i = 0; int j = 0; int k ;
  Deklarasi variabel-variabel i, j, dan k. Variabel i dan j digunakan sebagai indeks loop, sementara variabel k digunakan sebagai indeks loop dalam bagian kedua program.
-	Segitiga Siku-siku
  for (int i=0 ; i<= 5 ; i++){
  for( int j=0 ; j<=i ; j++ ){
  printf("*");
  }
  printf("\n");
  }
  Loop pertama (for) digunakan untuk mencetak segitiga siku-siku. Loop pertama (for i) berjalan dari 0 hingga 5, dan loop kedua (for j) berjalan dari 0 hingga nilai i.        Setiap kali loop kedua berjalan, karakter '*' dicetak, dan setiap baris diakhiri dengan karakter newline (\n).
-	Baris Kosong
  printf("\n"); printf("\n");
  Mencetak dua baris kosong untuk memberikan jarak antara output segitiga siku-siku dan segitiga terbalik siku-siku.
-	Segitiga Terbalik Siku-siku
  for (int i =0; i<5 ; i++){
  for(int j = 0; j<i; j++){
  printf(" ");
  }
  for ( k = 5; k>i ; k--){
  printf ("*") ;
  }
  printf("\n");
  }
  Loop ketiga (for) digunakan untuk mencetak segitiga terbalik siku-siku. Loop ketiga (for i) berjalan dari 0 hingga 4, dan loop keempat (for j) digunakan untuk mencetak      spasi sebanyak nilai i. Loop kelima (for k) digunakan untuk mencetak karakter '*' sebanyak 5 - i. Setiap baris diakhiri dengan karakter newline (\n).     
-	return 0;
  Mengembalikan nilai 0 dari fungsi main, menandakan bahwa program telah dijalankan dengan sukses. Ini juga dapat dianggap sebagai indikasi bahwa program telah berakhir       dengan benar.      

**Soal Nomor 3**
-	#include <stdio.h>
Baris ini adalah preprocessor directive yang menginstruksikan kompiler untuk menyertakan konten dari file header "stdio.h" ke dalam program. Header ini diperlukan untuk menggunakan fungsi input/output standar seperti printf.
-	int main() {
Inisiasi fungsi main, yang merupakan fungsi utama yang akan dieksekusi ketika program dijalankan.
-	int rows = 5;
Deklarasi variabel rows dengan nilai 5. Variabel ini menunjukkan jumlah baris pada segitiga yang akan dicetak.
-	Loop Pertama
for (int i = 1; i <= rows; i++) {
Loop pertama (for i) digunakan untuk mengatur baris pada segitiga. Dimulai dari baris pertama hingga baris ke-5 (sesuai dengan nilai rows).
-	int multiplier = 1;
Deklarasi variabel multiplier yang digunakan untuk menghasilkan pola angka pada setiap baris segitiga.
-	Loop Kedua
for (int j = 1; j <= i; j++) {
printf("%d ", i * multiplier);
multiplier++;
}
Loop kedua (for j) digunakan untuk mencetak angka pada setiap baris segitiga. Angka yang dicetak dihasilkan dengan mengalikan nilai i (nomor baris) dengan nilai multiplier. Setiap angka dicetak, dan nilai multiplier ditingkatkan
-	printf("\n");
Setiap baris diakhiri dengan karakter newline (\n), sehingga baris berikutnya akan dicetak pada baris baru.
-	}
Penutup dari loop pertama.
-	return 0;
Mengembalikan nilai 0 dari fungsi main, menandakan bahwa program telah dijalankan dengan sukses. Ini juga dapat dianggap sebagai indikasi bahwa program telah berakhir dengan benar.      

**Soal Nomor 4**

-	#include <stdio.h>
Baris ini adalah preprocessor directive yang menginstruksikan kompiler untuk menyertakan konten dari file header "stdio.h" ke dalam program. Header ini diperlukan untuk menggunakan fungsi input/output standar seperti printf dan scanf.
-	int saldo = 175000;  // Saldo awal Hattori
const int saldo_minimal = 50000;  // Saldo minimal yang harus disisakan
Deklarasi variabel saldo sebagai saldo awal dan saldo_minimal sebagai nilai saldo minimal yang harus disisakan.

-	Fungsi-fungsi ATM
Fungsi cekSaldo()
void cekSaldo(){
printf("Saldo Anda saat ini: Rp. %d\n", saldo);
}
Fungsi ini digunakan untuk mencetak saldo saat ini ke layar.
-	Fungsi setoran()
void setoran(){
int jumlah_setoran;
printf("Masukkan jumlah uang yang ingin Anda setorkan: Rp. ");
scanf("%d", &jumlah_setoran);
saldo += jumlah_setoran;
printf("Setoran berhasil.\n");
}
Fungsi ini memungkinkan pengguna untuk melakukan setoran. Pengguna diminta memasukkan jumlah uang yang ingin disetorkan, dan saldo akan ditambahkan sesuai dengan jumlah setoran.
-	Fungsi penarikan()
void penarikan(){
if (saldo <= saldo_minimal){
printf("Saldo Anda tidak mencukupi untuk melakukan penarikan.\n");
return;
}
int jumlah_penarikan;
printf("Masukkan jumlah uang yang ingin Anda tarik: Rp. ");
scanf("%d", &jumlah_penarikan);
if (jumlah_penarikan > saldo - saldo_minimal){
printf("Saldo Anda tidak mencukupi untuk melakukan penarikan sesuai kebijakan bank.\n");
} else {
saldo -= jumlah_penarikan;
printf("Penarikan berhasil.\n");
}
}
Fungsi ini memungkinkan pengguna untuk melakukan penarikan tunai. Terdapat dua kondisi yang diperiksa: apakah saldo mencukupi untuk melakukan penarikan, dan apakah penarikan tersebut memenuhi kebijakan saldo minimal yang harus disisakan.
-	Fungsi main()
int main(){
char menu;
int rek = 123;
char nama_akun[] = "Hattori";
printf("Selamat datang, %s!\n", nama_akun);
printf("No Rek: %d\n", rek);
do {
printf("\nMenu ATM:\n");
printf("1) Cek Saldo\n");
printf("2) Setoran\n");
printf("3) Penarikan Tunai\n");
printf("4) Exit\n");
printf("Pilih menu: ");
scanf(" %c", &menu);
switch (menu) {
case '1':
cekSaldo();
break;
case '2':
setoran();
break;
case '3':
penarikan();
break;
case '4':
printf("Terima kasih. Sampai jumpa!\n");
break;
default:
printf("Menu tidak valid. Silakan coba lagi.\n");
}
} while (menu != '4');
Fungsi main adalah fungsi utama yang akan dieksekusi ketika program dijalankan. Program ini menggunakan loop do-while untuk terus menampilkan menu ATM dan melakukan operasi sesuai dengan pilihan pengguna sampai pengguna memilih untuk keluar ('4'). Pilihan pengguna di-handle melalui sebuah switch statement, dan fungsi-fungsi ATM yang sesuai dipanggil.
- return 0;
Mengembalikan nilai 0 dari fungsi main, menandakan bahwa program telah dijalankan dengan sukses. Ini juga dapat dianggap sebagai indikasi bahwa program telah berakhir dengan benar.<br><br>

**Penjelasan source code Jobsheet 7**<br>

**Soal Nomor 1**
-	Deklarasi dan Inisialisasi Variabel :
int n = 20; // Jumlah mahasiswa
float nilai[n]; // Array untuk menyimpan nilai
n merupakan jumlah mahasiswa yang akan dimasukkan nilainya.
nilai adalah array float yang digunakan untuk menyimpan nilai dari setiap mahasiswa.
-	Input Nilai Mahasiswa :
for (int i = 0; i < n; i++) {
printf("Masukkan nilai mahasiswa ke-%d : ", i + 1);
scanf("%f", &nilai[i]);
}
Melalui loop for, program meminta input nilai dari setiap mahasiswa sebanyak n kali.
Nilai yang dimasukkan oleh pengguna disimpan dalam array nilai pada indeks ke-i.
-	Menghitung Total Nilai :
float total = 0;
for (int i = 0; i < n; i++) {
total += nilai[i];
}
Sebuah variabel total diinisialisasi dengan nilai 0.
Melalui loop for, program menjumlahkan nilai-nilai mahasiswa yang telah dimasukkan dan menyimpannya dalam variabel total.
-	Menghitung Rata-rata Nilai :
float rata_rata = total / n;
Menggunakan variabel total, program menghitung rata-rata nilai mahasiswa dengan membaginya dengan jumlah mahasiswa (n).
-	Menampilkan Rata-rata Nilai :
printf("Rata-rata nilai mahasiswa : %.2f\n", rata_rata);
Program menampilkan rata-rata nilai mahasiswa dengan menggunakan fungsi printf.
Format %.2f digunakan untuk menampilkan nilai float dengan dua angka di belakang koma.
-	return 0 : 
Mengindikasikan bahwa program telah berakhir dengan sukses.

**Soal Nomor 2**
-	Input Jumlah Mahasiswa :
int n; // Jumlah mahasiswa
printf("Masukkan jumlah nama mahasiswa : ");
scanf("%d", &n);
Program meminta pengguna untuk memasukkan jumlah mahasiswa (n) melalui fungsi scanf.
-	Deklarasi Array untuk Menampung Nama Mahasiswa:
char nama_mahasiswa[n][100]; // Maksimum 100 karakter per nama
Program mendeklarasikan array nama_mahasiswa dengan ukuran n baris dan masing-masing baris dapat menampung string hingga 100 karakter. Ini akan digunakan untuk menyimpan nama-nama mahasiswa.
-	Meminta Input Nama Mahasiswa:
for (int i = 0; i < n; i++) {
printf("Masukkan nama mahasiswa ke-%d : ", i + 1);
scanf("%s", nama_mahasiswa[i]);
}
Melalui loop for, program meminta input nama dari setiap mahasiswa sebanyak n kali.
Nama mahasiswa dimasukkan ke dalam array nama_mahasiswa pada indeks ke-i.
-	Menampilkan Nama-nama Mahasiswa:
printf("\nNama-nama mahasiswa :\n");
for (int i = 0; i < n; i++) {
printf("Mahasiswa ke-%d : %s\n", i + 1, nama_mahasiswa[i]);
}
Setelah mendapatkan input nama, program menampilkan nama-nama mahasiswa dengan menggunakan loop for dan fungsi printf.
Masing-masing nama ditampilkan dengan format "Mahasiswa ke-i : nama".
-	Return 0 :
Mengindikasikan bahwa program telah berakhir dengan sukses.
-	Sebagai catatan, program ini meminta input nama menggunakan scanf("%s", nama_mahasiswa[i]), yang cocok untuk nama tunggal tanpa spasi. Jika Anda ingin mendukung input nama yang mengandung spasi atau lebih dari satu kata, lebih baik menggunakan fgets atau scanf("%[^\n]", nama_mahasiswa[i]) untuk membaca seluruh baris teks. Ini memungkinkan pengguna untuk memasukkan nama yang lebih kompleks.

**Soal Nomor 3**

-	Deklarasi Variabel dan Data Login:
char username[] = "bungaaprillia";
char password[] = "150005";
char input_username[50];
char input_password[50];
username dan password menyimpan data login yang benar.
input_username dan input_password akan digunakan untuk menyimpan input dari pengguna.
-	Meminta Input Username dan Password dari Pengguna:
printf("Masukkan username : ");
scanf("%s", input_username);
printf("Masukkan password : ");
scanf("%s", input_password);
Program meminta pengguna untuk memasukkan username dan password menggunakan fungsi printf dan scanf.
-	Pengecekan Kesesuaian Username dan Password:
int username_match = 1;
int password_match = 1
for (int i = 0; username[i] != '\0' || input_username[i] != '\0'; i++) {
if (username[i] != input_username[i]) {
username_match = 0;
break;
}
}
for (int i = 0; password[i] != '\0' || input_password[i] != '\0'; i++) {
if (password[i] != input_password[i]) {
password_match = 0;
break;
}
}
Program menggunakan loop for untuk membandingkan karakter-karakter username dan password yang dimasukkan oleh pengguna dengan username dan password yang benar.
Jika ada karakter yang tidak sesuai, variabel username_match atau password_match diubah menjadi 0 dan loop berhenti.
-	Menampilkan Pesan Berhasil atau Gagal Login:
if (username_match && password_match) {
printf("\nBerhasil login\n");
} else {
printf("\nPassword salah\n");
}
Jika username_match dan password_match bernilai 1 (true), maka program menampilkan pesan "Berhasil login".
Jika ada kesalahan dalam username atau password, program menampilkan pesan "Password salah".
-	Return 0:
Mengindikasikan bahwa program telah berakhir dengan sukses.<br><br>

**Penjelasan source code Jobsheet 8**<br>

**Soal Nomor 1**
-	#include <stdio.h>
Menggunakan direktif preprosesor #include untuk menyertakan file header stdio.h, yang diperlukan untuk fungsi input-output standar dalam bahasa C.

-	// Fungsi rekursif untuk menghitung hasil perkalian
int perkalian_rekursif(int a, int b) {
// Kasus dasar: jika salah satu bilangan adalah 0, hasilnya adalah 0
if (a == 0 || b == 0) {
return 0;
}
// Kasus rekursif: a * b dapat dihitung sebagai a + (a * (b-1))
else {
return a + perkalian_rekursif(a, b - 1);
}
}
Deklarasi dan definisi fungsi perkalian_rekursif yang mengambil dua parameter bertipe int (bilangan a dan b). Fungsi ini mengimplementasikan perkalian dengan pendekatan rekursif. Dalam fungsi ini, terdapat dua kasus:
-	Kasus Dasar (if a == 0 || b == 0):
Jika salah satu bilangan (atau kedua bilangan) adalah 0, maka hasil perkalian adalah 0. Ini adalah kondisi berhenti atau kasus dasar untuk rekursi.
-	Kasus Rekursif (else):
Jika kedua bilangan tidak sama dengan 0, maka hasil perkalian a * b dihitung sebagai a + (a * (b-1)). Ini adalah langkah rekursif, di mana kita mengurangi nilai b satu per satu dalam setiap pemanggilan rekursif.
-	int main() {
int bilangan1 = 12;
int bilangan2 = 6;
// Memanggil fungsi rekursif untuk menghitung hasil perkalian
int hasil_perkalian = perkalian_rekursif(bilangan1, bilangan2);

// Menampilkan hasil perkalian
printf("Hasil perkalian %d x %d adalah: %d\n", bilangan1, bilangan2, hasil_perkalian);
-	return 0; program berakhir
Fungsi main sebagai titik masuk utama program. Dalam fungsi main, dua variabel bilangan1 dan bilangan2 diinisialisasi dengan nilai 12 dan 6, masing-masing. Selanjutnya, fungsi perkalian_rekursif dipanggil dengan parameter ini, dan hasilnya disimpan dalam variabel hasil_perkalian. Terakhir, hasil perkalian ditampilkan menggunakan fungsi printf.
-	Kode ini menunjukkan cara implementasi rekursi dapat digunakan untuk menghitung hasil perkalian dua bilangan secara berulang hingga mencapai kasus dasar.

**Soal Nomor 2**

-	#include <stdio.h>
Menggunakan direktif preprosesor #include untuk menyertakan file header stdio.h, yang diperlukan untuk fungsi input-output standar dalam bahasa C.
-	// Fungsi untuk penjumlahan
float tambah(float a, float b) {
return a + b;
}
-	// Fungsi untuk pengurangan
float kurang(float a, float b) {
return a - b;
}
-	// Fungsi untuk perkalian
float kali(float a, float b) {
return a * b;
}
-	Deklarasi dan definisi tiga fungsi matematika dasar (tambah, kurang, dan kali). Setiap fungsi menerima dua parameter bertipe float dan mengembalikan hasil operasi yang sesuai.
-	#include<stdio.h>
// Fungsi untuk pembagian
float bagi(float a, float b) {
// Handle pembagian oleh nol
if (b != 0) {
return a / b;
} else {
printf("Error: Pembagian oleh nol tidak diperbolehkan.\n");
return 0;
}
}
Deklarasi dan definisi fungsi pembagian (bagi). Fungsi ini juga menerima dua parameter bertipe float. Sebelum melakukan pembagian, fungsi ini memeriksa apakah pembagian oleh nol terjadi. Jika demikian, program mencetak pesan kesalahan dan mengembalikan nilai 0; jika tidak, hasil pembagian dikembalikan.
-	int main() {
float angka1, angka2;
printf("Masukkan dua angka: ");
scanf("%f %f", &angka1, &angka2);
-	// Penjumlahan
printf("Penjumlahan: %.2f\n", tambah(angka1, angka2));
-	// Pengurangan
printf("Pengurangan: %.2f\n", kurang(angka1, angka2));
-	// Perkalian
printf("Perkalian: %.2f\n", kali(angka1, angka2));
-	// Pembagian
printf("Pembagian: %.2f\n", bagi(angka1, angka2));

-	return 0; program berakhir
}
-	Fungsi main sebagai titik masuk utama program. Dalam fungsi main, dua variabel angka1 dan angka2 digunakan untuk menyimpan dua angka yang dimasukkan oleh pengguna melalui fungsi scanf. Selanjutnya, program memanggil fungsi penjumlahan, pengurangan, perkalian, dan pembagian, serta menampilkan hasilnya menggunakan fungsi printf. %f digunakan untuk memformat angka floating-point dengan dua digit di belakang koma.
-	Program ini memberikan pengguna pilihan untuk melakukan beberapa operasi aritmetika dasar dan menangani kasus khusus pembagian oleh nol.

**Soal Nomor 3**

-	#include <stdio.h>
Menggunakan direktif preprosesor #include untuk menyertakan file header stdio.h, yang diperlukan untuk fungsi input-output standar dalam bahasa C.
-	// Fungsi untuk menghitung luas lingkaran
float luas(float radius) {
return 3.14 * radius * radius;
}
Deklarasi dan definisi fungsi luas yang menerima satu parameter bertipe float (radius) dan mengembalikan hasil perhitungan luas lingkaran menggunakan rumus π * r^2.
-	// Fungsi untuk menghitung keliling lingkaran
float keliling(float radius) {
return 2 * 3.14 * radius;
}
Deklarasi dan definisi fungsi keliling yang juga menerima satu parameter bertipe float (radius) dan mengembalikan hasil perhitungan keliling lingkaran menggunakan rumus 2 * π * r.
-	int main() {
float radius;
printf("Masukkan radius lingkaran: ");
scanf("%f", &radius);
Fungsi main sebagai titik masuk utama program. Dalam fungsi main, sebuah variable radius bertipe float digunakan untuk menyimpan nilai radius yang dimasukkan oleh pengguna melalui fungsi scanf.
-	// Menghitung dan menampilkan luas lingkaran
printf("Luas lingkaran: %.2f\n", luas(radius));
-	// Menghitung dan menampilkan keliling lingkaran
printf("Keliling lingkaran: %.2f\n", keliling(radius));
-	return 0; program berakhir
-	 program memanggil fungsi luas dan keliling dengan menggunakan nilai radius yang dimasukkan oleh pengguna. Hasil perhitungan tersebut kemudian ditampilkan menggunakan fungsi printf. %f digunakan untuk memformat angka floating-point dengan dua digit di belakang koma.
-	Program ini memberikan pengguna informasi tentang luas dan keliling lingkaran berdasarkan nilai radius yang dimasukkan. Rumus yang digunakan sesuai dengan rumus umum untuk menghitung luas dan keliling lingkaran.

**Soal Nomor 4**

-	include <stdio.h>
Menggunakan direktif preprosesor #include untuk menyertakan file header stdio.h, yang diperlukan untuk fungsi input-output standar dalam bahasa C.
-	// Fungsi untuk menghitung besar potongan
float potong(float total_pembelian) {
float diskon = 0;
-	// Menentukan diskon berdasarkan ketentuan
if (total_pembelian > 1000000 && total_pembelian < 3000000) {
diskon = 0.20;
} else if (total_pembelian >= 3000000) {
diskon = 0.35;
}
-	// Menghitung besarnya potongan
return total_pembelian * diskon;
}
Deklarasi dan definisi fungsi potong yang menerima satu parameter bertipe float (total_pembelian) dan mengembalikan nilai float yang merupakan besaran potongan. Fungsi ini menentukan besaran diskon berdasarkan ketentuan tertentu: jika total pembelian lebih dari 1.000.000 dan kurang dari 3.000.000, diskon sebesar 20%; jika total pembelian 3.000.000 atau lebih, diskon sebesar 35%.
-	int main() {
loat total_pembelian;
-	// Meminta pengguna memasukkan total pembelian
printf("Program Hitung Potongan\n");
printf("Total Pembelian (Rp.) : ");
scanf("%f", &total_pembelian);
Fungsi main sebagai titik masuk utama program. Dalam fungsi main, sebuah variabel total_pembelian bertipe float digunakan untuk menyimpan nilai total pembelian yang dimasukkan oleh pengguna melalui fungsi scanf.
-	// Menghitung dan menampilkan besar diskon
float besar_diskon = potong(total_pembelian);
printf("Besar Diskon : %.2f\n", besar_diskon);
-	// Menghitung dan menampilkan besar yang harus dibayarkan
float besar_bayar = total_pembelian - besar_diskon;
printf("Besar Yang Harus Dibayarkan : %.2f\n", besar_bayar);
-	return 0; program  berakhir
-	Program memanggil fungsi potong untuk menghitung besar potongan berdasarkan total pembelian yang dimasukkan. Hasil perhitungan tersebut kemudian ditampilkan menggunakan fungsi printf. Program juga menghitung dan menampilkan besaran yang harus dibayarkan setelah potongan. %f digunakan untuk memformat angka floating-point dengan dua digit di belakang koma.
-	Program ini memberikan pengguna informasi tentang besaran potongan dan total pembayaran berdasarkan total pembelian dan aturan diskon yang telah ditentukan.














