n = int(input("Input\n"))

print("Matriks A")
A = [list(map(int, input().split())) for _ in range(n)]

print("Matriks B")
B = [list(map(int, input().split())) for _ in range(n)]

hasil = [[0] * n for _ in range(n)]
for i in range(n):
    for j in range(n):
        for k in range(n):
            hasil[i][j] += A[i][k] * B[k][j]

print("\nOutput")
print("Matriks AXB")
for i in range(n):
    print(*hasil[i])