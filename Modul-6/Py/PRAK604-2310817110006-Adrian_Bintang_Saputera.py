kode = input("Input\n").rstrip('\n')
pesan = input().rstrip('\n')

panjang_kode = len(kode)
panjang_pesan = len(pesan)

if panjang_kode != panjang_pesan:
    print("\nOutput")
    print("Panjang kalimat berbeda, pesan palsu")
else:
    hasil_pesan = []
    for i in range(panjang_kode):
        if kode[i] != ' ':
            if kode[i] == pesan[i]:
                hasil_pesan.append('*')
            else:
                hasil_pesan.append('#')
        else:
            if pesan[i] != ' ':
                hasil_pesan.append('#')
            else:
                hasil_pesan.append(' ')

    jumlah_bintang = hasil_pesan.count('*')
    jumlah_pagar = hasil_pesan.count('#')

    print("\nOutput")
    print(''.join(hasil_pesan))
    print(f"* = {jumlah_bintang}")
    print(f"# = {jumlah_pagar}")

    if jumlah_bintang >= jumlah_pagar and panjang_kode == panjang_pesan:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")