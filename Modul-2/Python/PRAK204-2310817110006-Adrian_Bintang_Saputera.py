print("Input")
angka = input().split()
pi = 3.142857

if len(angka) == 1:
    jari_jari = float(angka[0])
    tinggi = float(input())
elif len(angka) == 2:
    jari_jari, tinggi = map(float, angka)

volume = jari_jari**2 * pi * tinggi
luas_permukaan = 2 * ((pi * jari_jari) * (jari_jari + tinggi))
keliling = 2 * pi * jari_jari

print("\nOutput")
print(f"Volume = {volume:.2f}")
print(f"Luas = {luas_permukaan:.2f}")
print(f"Keliling = {keliling:.2f}")
