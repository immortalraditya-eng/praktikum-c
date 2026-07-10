const express = require("express");

const app = express();

const PORT = 3000;

app.use(express.json());
app.use(express.static("public"));

let mahasiswa = [
   {
       id: 1,
       nama: "Andi",
       nim: "230001",
       prodi: "Informatika"
   }
];

// GET: Ambil semua data mahasiswa
app.get("/api/mahasiswa", (req, res) => {
    res.json(mahasiswa);
});

// POST: Tambah data mahasiswa
app.post("/api/mahasiswa", (req, res) => {
    const { nama, nim, prodi } = req.body;
    const newId = mahasiswa.length > 0 ? Math.max(...mahasiswa.map(m => m.id)) + 1 : 1;
    const newMahasiswa = { id: newId, nama, nim, prodi };
    mahasiswa.push(newMahasiswa);
    res.status(201).json(newMahasiswa);
});

// PUT: Update data mahasiswa
app.put("/api/mahasiswa/:id", (req, res) => {
    const id = parseInt(req.params.id);
    const { nama, nim, prodi } = req.body;
    const index = mahasiswa.findIndex(m => m.id === id);
    
    if (index !== -1) {
        mahasiswa[index] = { id, nama, nim, prodi };
        res.json(mahasiswa[index]);
    } else {
        res.status(404).json({ message: "Data mahasiswa tidak ditemukan" });
    }
});

// DELETE: Hapus data mahasiswa
app.delete("/api/mahasiswa/:id", (req, res) => {
    const id = parseInt(req.params.id);
    mahasiswa = mahasiswa.filter(m => m.id !== id);
    res.json({ message: "Data berhasil dihapus" });
});

app.listen(PORT, () => {
    console.log(`Server berjalan di http://localhost:${PORT}`);
});
