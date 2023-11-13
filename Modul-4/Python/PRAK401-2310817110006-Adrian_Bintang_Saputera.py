angkaKelipatan, simbol = input("Input\n").split()

angkaKelipatan = int(angkaKelipatan)

print("Output")
for i in range(1, 51):
    if i % angkaKelipatan == 0:
        print(simbol, end=" ")
    else:
        print(i, end=" ")