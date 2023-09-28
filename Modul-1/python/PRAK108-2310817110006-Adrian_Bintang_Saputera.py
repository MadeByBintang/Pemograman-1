putaran = float(input("Masukkan Banyak Putaran: "))
jarak_tempuh = float(input("Masukkan Jarak Tempuh: "))

keliling_taman = jarak_tempuh / putaran
jari_jari_taman = keliling_taman / (2 * 3.14)

print("Diketahui :")
print(f"Pak Dengklek mengelilingi taman = {putaran:.0f} Putaran")
print(f"Jarak tempuh Pak Dengklek = {jarak_tempuh:.0f} Kilometer")
print("Jawaban :")
print(
    f"Jari-jari taman yang dikelilingi Pak Dengklek adalah {jari_jari_taman:.2f} Kilometer"
)
