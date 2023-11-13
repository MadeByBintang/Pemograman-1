n, m = map(int, input("Input\n").split())
total = 0

print("Output")
for i in range(1, n+1):
    hasil = 0
    for j in range(i, 0, -1):
        print(f"({j} * {m})", end="")
        if j > 1:
            print(" + ", end="")
        hasil += j * m
    total += hasil
    print(f" = {hasil}")

print(total)