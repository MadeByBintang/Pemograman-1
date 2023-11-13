angka1, angka2 = map(int, input("Input\n").split())

print("Output")
if angka1 < angka2:
    for i in range(angka1, angka2 + 1):
        print(f"{i} {angka2 - (i - angka1)}", end="")
        if i != angka2:
            print(" - ", end="")
else:
    for i in range(angka1, angka2 - 1, -1):
        print(f"{i} {angka2 + (angka1 - i)}", end="")
        if i != angka2:
            print(" - ", end="")

print()