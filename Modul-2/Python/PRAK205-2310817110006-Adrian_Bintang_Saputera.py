import math

print("Input")

angka = input().split()
if len(angka) == 1:
    A = float(angka[0])
    B = float(input())
else:
    A, B = map(float, angka)

C = math.sqrt(B**2 - A**2)
tinggi = A
alas = C
keliling = A + B + C
luas = 0.5 * (C * A)

print("Output")
print(f"Alas = {alas:.0f} cm")
print(f"Tinggi = {tinggi:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")
