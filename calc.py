import math

def hitung(operasi):
    try:
        bagian = operasi.strip().split()

        # Format: a op b
        if len(bagian) == 3:
            a = float(bagian[0])
            op = bagian[1]
            b = float(bagian[2])

            if op == '+':
                return a + b
            elif op == '-':
                return a - b
            elif op == '*':
                return a * b
            elif op == '/':
                return a / b if b != 0 else "Error: bagi nol"
            elif op == '^':
                return math.pow(a, b)
            else:
                return "Error: operator tidak dikenali"

        # Format: sqrt x
        elif len(bagian) == 2:
            op = bagian[0]
            a = float(bagian[1])

            if op == 'sqrt':
                return math.sqrt(a) if a >= 0 else "Error: akar negatif"
            else:
                return "Error: format tidak dikenali"

        else:
            return "Error: format salah"

    except:
        return "Error: input tidak valid"


# Baca file dan tulis hasil
with open("ops.txt", "r") as infile, open("results.txt", "w") as outfile:
    for line in infile:
        hasil = hitung(line)
        outfile.write(f"{line.strip()} = {hasil}\n")

print("Perhitungan selesai. Hasil disimpan di results.txt")