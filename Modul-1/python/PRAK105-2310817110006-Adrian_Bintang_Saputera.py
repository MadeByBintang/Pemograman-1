a = int(input("Variabel a bernilai: "))
b = int(input("Variabel b bernilai: "))
x = int(input("Variabel x bernilai: "))
y = int(input("Variabel y bernilai: "))

sisa_bagi_a = a % b
sisa_bagi_x = x % y
total_sisa_bagi = sisa_bagi_a + sisa_bagi_x

print(f"Total sisa bagi dari a dibagi b dan x dibagi y adalah {total_sisa_bagi}")
