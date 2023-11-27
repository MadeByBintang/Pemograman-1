def biodata(tahun_lahir, namaku, asal):
    tahun_sekarang = 2020
    umur = tahun_sekarang - tahun_lahir

    print(f"Perkenalkan Nama Saya : {namaku}")
    print(f"Umur Saya : {umur}")
    print(f"Saya Adalah Angkatan : {tahun_sekarang}")
    print(f"Asal Saya dari : {asal}")

tahun_lahir = int(input())
namaku = input()
asal = input()

biodata(tahun_lahir, namaku, asal)