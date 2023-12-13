jumlah_ruangan = int(input("Input\n"))
zetsu_putih = list(map(int, input().split()))

print("\nOutput")
for i in range(jumlah_ruangan):
    print(zetsu_putih[i] * (i + 1), end=" ")