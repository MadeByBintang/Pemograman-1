nilai_pertama = float(input("Input\nMasukkan Nilai Pertama : "))
nilai_kedua = float(input("Masukkan Nilai Kedua   : "))

hasil = nilai_pertama + nilai_kedua

output_pertama = (
    f"{int(nilai_pertama)}" if nilai_pertama.is_integer() else f"{nilai_pertama:.2f}"
)

print("\nOutput")
print(
    f'Hasil dari penjumlahan nilai pertama "{output_pertama}" dan nilai kedua "{nilai_kedua}" adalah "{hasil:.2f}"'
)
