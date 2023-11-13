batas = int(input("Input\n"))
print("Output")

for i in range(1, batas+1, 2):
    print(i, end=" ")

print()

if batas % 2 == 0:
    for i in range(batas, 1, -2):
        print(i, end=" ")
else:
    for i in range(batas-1, 1, -2):
        print(i, end=" ")