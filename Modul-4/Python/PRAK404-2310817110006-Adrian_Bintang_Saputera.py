while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")

    pilihan = int(input("Masukkan Pilihan : "))

    if 1 <= pilihan <= 4:
        nilai1 = float(input("Masukkan nilai pertama : "))
        nilai2 = float(input("Masukkan nilai kedua : "))

        if pilihan == 1:
            print(f"Hasil Penjumlahan antara {nilai1:.2f} dengan {nilai2:.2f} adalah {nilai1 + nilai2:.2f}")
        elif pilihan == 2:
            print(f"Hasil Pengurangan antara {nilai1:.2f} dengan {nilai2:.2f} adalah {nilai1 - nilai2:.2f}")
        elif pilihan == 3:
            print(f"Hasil Perkalian antara {nilai1:.2f} dengan {nilai2:.2f} adalah {nilai1 * nilai2:.2f}")
        elif pilihan == 4:
            if nilai2 != 0:
                print(f"Hasil Pembagian antara {nilai1:.2f} dengan {nilai2:.2f} adalah {nilai1 / nilai2:.2f}")
            else:
                print("Error: Tidak bisa membagi oleh 0")
    elif pilihan == 5:
        print("Terimakasih, telah menggunakan kalkulator Bintang")
        break
    else:
        print("Input anda salah, silahkan coba lagi")