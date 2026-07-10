let editId = null;

async function loadData() {
    const response = await fetch("/api/mahasiswa");
    const data = await response.json();
    let html = "";
    
    data.forEach(item => {
        html += `
        <tr>
            <td>${item.nama}</td>
            <td>${item.nim}</td>
            <td>${item.prodi}</td>
            <td>
                <button onclick="edit(${item.id})">Edit</button>
                <button onclick="hapus(${item.id})">Delete</button>
            </td>
        </tr>
        `;
    });
    
    document.getElementById("tabelMahasiswa").innerHTML = html;
}

async function simpan() {
    const nama = document.getElementById("nama").value;
    const nim = document.getElementById("nim").value;
    const prodi = document.getElementById("prodi").value;

    if (!nama || !nim || !prodi) {
        alert("Semua field harus diisi!");
        return;
    }

    const payload = { nama, nim, prodi };

    if (editId) {
        // Proses Update
        await fetch(`/api/mahasiswa/${editId}`, {
            method: "PUT",
            headers: {
                "Content-Type": "application/json"
            },
            body: JSON.stringify(payload)
        });
        editId = null; // Reset editId
    } else {
        // Proses Create
        await fetch("/api/mahasiswa", {
            method: "POST",
            headers: {
                "Content-Type": "application/json"
            },
            body: JSON.stringify(payload)
        });
    }

    // Bersihkan input
    document.getElementById("nama").value = "";
    document.getElementById("nim").value = "";
    document.getElementById("prodi").value = "";
    
    // Muat ulang data
    loadData();
}

async function hapus(id) {
    if (confirm("Yakin ingin menghapus data ini?")) {
        await fetch(`/api/mahasiswa/${id}`, {
            method: "DELETE"
        });
        loadData();
    }
}

async function edit(id) {
    const response = await fetch("/api/mahasiswa");
    const data = await response.json();
    const item = data.find(m => m.id === id);
    
    if (item) {
        document.getElementById("nama").value = item.nama;
        document.getElementById("nim").value = item.nim;
        document.getElementById("prodi").value = item.prodi;
        editId = id; // Set editId
    }
}

// Muat data awal saat halaman dimuat
loadData();
