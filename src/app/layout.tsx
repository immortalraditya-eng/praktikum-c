import type { Metadata } from "next";
import { Inter } from "next/font/google";
import "./globals.css";

const inter = Inter({ subsets: ["latin"], variable: "--font-inter" });

export const metadata: Metadata = {
  title: "Universitas Nusantara | Kampus Masa Depan",
  description: "Selamat datang di Universitas Nusantara, tempat para pemimpin masa depan ditempa.",
};

export default function RootLayout({
  children,
}: Readonly<{
  children: React.ReactNode;
}>) {
  return (
    <html lang="id" className={inter.variable}>
      <body>
        {children}
      </body>
    </html>
  );
}
