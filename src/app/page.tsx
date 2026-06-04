import Image from "next/image";
import styles from "./page.module.css";

export default function Home() {
  return (
    <div className={styles.container}>
      <header className={styles.header}>
        <div className={styles.logo}>NUSANTARA.</div>
        <nav className={styles.nav}>
          <a href="#" className={styles.navLink}>Akademik</a>
          <a href="#" className={styles.navLink}>Fakultas</a>
          <a href="#" className={styles.navLink}>Riset</a>
          <a href="#" className={styles.navLink}>Kehidupan Kampus</a>
        </nav>
      </header>

      <main>
        <section className={styles.hero}>
          <div className={styles.heroContent}>
            <div className={styles.badge}>
              <span className={styles.badgeIcon}>✨</span>
              Pendaftaran Mahasiswa Baru 2026/2027 Dibuka
            </div>
            <h1>Bentuk Masa Depanmu Bersama Kami.</h1>
            <p>
              Universitas Nusantara menyediakan lingkungan akademik kelas dunia untuk 
              mencetak pemimpin masa depan dengan kurikulum berbasis riset dan teknologi mutakhir.
            </p>
            <div className={styles.ctaGroup}>
              <button className={styles.btnPrimary}>Daftar Sekarang</button>
              <button className={styles.btnSecondary}>Jelajahi Program</button>
            </div>

            <div className={styles.stats}>
              <div className={styles.statItem}>
                <h3>98%</h3>
                <p>Lulusan Bekerja &lt; 6 Bulan</p>
              </div>
              <div className={styles.statItem}>
                <h3>50+</h3>
                <p>Mitra Internasional</p>
              </div>
              <div className={styles.statItem}>
                <h3>120</h3>
                <p>Program Studi</p>
              </div>
            </div>
          </div>

          <div className={styles.heroImageWrapper}>
            <Image
              src="https://images.unsplash.com/photo-1541339907198-e08756dedf3f?ixlib=rb-4.0.3&auto=format&fit=crop&w=1200&q=80"
              alt="Mahasiswa di lingkungan kampus"
              fill
              priority
              className={styles.heroImage}
            />
          </div>
        </section>
      </main>
    </div>
  );
}
