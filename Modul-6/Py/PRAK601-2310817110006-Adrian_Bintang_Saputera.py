baris, kolom = map(int, input("Input\n").split())
nilai_input = list(map(int, input().split()))

matriks_midoriya = [nilai_input[i:i+kolom] for i in range(0, len(nilai_input), kolom)]

print("\nOutput")
for baris in matriks_midoriya:
    print(*baris)