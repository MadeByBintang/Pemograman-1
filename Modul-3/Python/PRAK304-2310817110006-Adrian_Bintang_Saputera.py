angka = int(input("Masukkan sebuah angka (0-100): "))

if angka == 0:
    print("Nol")
elif angka >= 1 and angka <= 9:
    print("Satuan")
elif angka >= 10 and angka <= 19:
    print("Belasan")
elif angka >= 20 and angka <= 99:
    print("Puluhan")
elif angka == 100:
    print("Anda Menginput Melebihi Limit Bilangan")