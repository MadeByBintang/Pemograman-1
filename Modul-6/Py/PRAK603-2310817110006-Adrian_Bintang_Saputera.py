n1, n2 = map(int, input("Input\n").split())

if n1 != n2:
    print("\nOutput")
    print("Jumlah tidak sama")
else:
    matriks1 = list(map(int, input().split()))
    matriks2 = list(map(int, input().split()))

    print("\nOutput")
    for i in range(n1):
        print(matriks1[i] * matriks2[i], end=" ")
    print()