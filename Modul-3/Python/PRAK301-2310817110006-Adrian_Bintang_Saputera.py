angka1, angka2 = map(int, input("Masukkan 2 angka acak: ").split())

if angka1 <= angka2:
    print(f"Urutan terkecil ke terbesar: {angka1} {angka2}")
else:
    print(f"Urutan terkecil ke terbesar: {angka2} {angka1}")