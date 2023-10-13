angka = input("Input\n").split()

if len(angka) == 2:
    a, b = map(float, angka)
    i, j = map(float, input().split())
    x, y = map(float, input().split())
elif len(angka) == 6:
    a, b, i, j, x, y = map(float, angka)

hasil = (a - b) * (i / j) - (x + y)

print("\nOutput")
print(f"Hasil dari (a - b) * (i / j) - (x + y) adalah {hasil:.3f}")
