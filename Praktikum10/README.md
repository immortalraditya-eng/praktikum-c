# Praktikum 10: Pemrograman Web (HTML & CSS Modern)

**Oleh:** Naufal Raditya Prabowo  
**Role:** Backend Engineer / Full-Stack Developer  

Repositori / direktori ini berisi kumpulan latihan dan tugas praktikum mengenai fundamental desain web modern menggunakan HTML5 Semantic, CSS murni (Vanilla CSS), Flexbox, CSS Grid, dan Responsive Design (Media Queries). Seluruh desain dikembangkan dengan prinsip **UI/UX Modern (Anti-Mainstream)** yang berfokus pada tipografi elegan, *glassmorphism*, tata letak asimetris, dan kemudahan akses.

---

## 📂 Struktur Direktori & Kesimpulan Latihan

### 1. [Latihan 1: Profil Diri CSS Dasar](./Latihan1)
Latihan ini berfokus pada pemahaman dasar styling dengan CSS eksternal. 
- **Konsep:** Membuat *Profile Card* menggunakan struktur HTML sederhana.
- **Implementasi Desain:** Desain dibuat tidak kaku; menggunakan efek *glassmorphism* (backdrop-filter) tipis di atas background bernuansa gelap. Data profil disusun rapi menggunakan *grid-list* agar terlihat seperti kartu identitas digital modern.

### 2. [Latihan 2: Navbar dengan Flexbox (Multi-Page)](./Latihan2)
Latihan ini difokuskan pada penggunaan **CSS Flexbox** untuk menyelaraskan elemen secara horizontal dan vertikal.
- **Konsep:** Membangun navigasi yang rapi, *alignment* sempurna tanpa *float*.
- **Implementasi Desain (Anti-Mainstream):** Menggunakan konsep **Floating Dock** (seperti UI MacOS atau Web SaaS Premium) alih-alih navbar membosankan yang menempel penuh di atas layar. Menu menggunakan ikon minimalis dari *Phosphor Icons* dengan *interactive tooltips*. 
- **Fungsionalitas:** Terdiri dari 5 halaman terpisah (`index`, `about`, `projects`, `articles`, dan `contact`) yang terhubung dan fungsional sepenuhnya.

### 3. [Latihan 3: Galeri Foto dengan CSS Grid](./Latihan3)
Latihan ini mengajarkan kekuatan **CSS Grid** untuk menyusun elemen dua dimensi (baris dan kolom sekaligus).
- **Konsep:** Menyusun banyak foto agar tidak berantakan.
- **Implementasi Desain:** Dibuat dengan gaya *Editorial/Bento-box*, di mana ukuran foto bervariasi (ada yang memakan 2 baris atau 2 kolom) sehingga tidak terlihat monoton seperti tabel biasa. Disertai efek *hover overlay* gelap untuk menampilkan teks kategori.

### 4. [Latihan 4: Halaman Responsif dengan Media Query](./Latihan4)
Latihan ini berfokus pada **Responsive Web Design**, yaitu teknik agar web dapat beradaptasi dengan berbagai ukuran layar tanpa rusak.
- **Konsep:** Menggunakan `@media screen and (max-width: ...)` pada CSS.
- **Implementasi Desain:** Simulasi *Dashboard Analytics* sederhana. 
    - **Desktop (>1024px):** Layout lengkap dengan Sidebar kiri dan grid 3 kolom.
    - **Tablet (<1024px):** Grid menyempit menjadi 2 kolom agar teks tidak sesak.
    - **Mobile (<768px):** Sidebar disembunyikan (berubah menjadi menu hamburger) dan layout Grid hancur menjadi 1 baris memanjang ke bawah agar mudah di-*scroll* dengan jari.

### 5. [Tugas Praktikum: Website Portofolio Pribadi](./TugasPraktikum)
Ini adalah tugas akhir bab yang menggabungkan seluruh teknik dari Latihan 1 hingga Latihan 4.
- **Konsep:** Membangun *Landing Page* statis utuh yang terstruktur dan memenuhi kaidah Semantic HTML5.
- **Implementasi Desain:**
  - **HTML5 Semantic:** Menggunakan tag `<header>`, `<nav>`, `<main>`, `<section>`, `<article>`, dan `<footer>`.
  - **Flexbox & Grid:** Flexbox digunakan untuk Navbar dan penyusunan komponen mikro, sedangkan Grid digunakan untuk mengatur *masonry layout* di bagian portofolio dan *skills arsenal*.
  - **Responsive:** Berfungsi sempurna dan rapi dari layar komputer besar hingga ke layar HP sekecil iPhone SE.
  - **Estetika:** Mengusung tema *Dark Mode Premium* layaknya portofolio spesialis teknikal tingkat tinggi. Menggunakan *font* khusus (DM Sans) dan interaksi tombol bergaya modern.

---

*Dibuat untuk memenuhi tugas Praktikum 10 Pemrograman Web. Seluruh kode HTML dan CSS ditulis secara bersih (Clean Code) tanpa bergantung pada framework tambahan (Tailwind/Bootstrap).*
