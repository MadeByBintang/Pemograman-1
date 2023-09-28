a = float(input("Panjang sisi segitiga a: "))
b = float(input("Panjang sisi segitiga b: "))
c = float(input("Panjang sisi segitiga c: "))

keliling_tanah = a + b + c
harga_tanah_per_meter = 85000
biaya_yang_diperlukan = keliling_tanah * harga_tanah_per_meter

print("Diketahui :")
print(f"Panjang sisi segitiga berturut-turut adalah {a:.0f}, {b:.0f}, dan {c:.0f}")
print(f"Keliling Tanah Pak Dengklek adalah {keliling_tanah:.0f}")
print(f"Harga tanah Per Meter adalah {harga_tanah_per_meter}")
print("Jawaban :")
print(f"Biaya yang diperlukan Pak Dengklek adalah : Rp {biaya_yang_diperlukan:.0f}")
