nilai = int(input("Masukkan nilai: "))

if nilai >= 80:
    grade = 'A'
elif nilai >= 70 and nilai <= 79:
    grade = 'B'
elif nilai >= 60 and nilai <= 69:
    grade = 'C'
elif nilai >= 50 and nilai <= 59:
    grade = 'D'
else:
    grade = 'E'

print(f"Grade anda: {grade}")