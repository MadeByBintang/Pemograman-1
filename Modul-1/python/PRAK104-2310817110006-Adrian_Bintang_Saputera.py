harga_sepatu_A = int(input("Harga Sepatu A adalah "))
harga_sepatu_B = int(input("Harga Sepatu B adalah "))

diskon_sepatu_A = 0.13
diskon_sepatu_B = 0.21

harga_sepatu_A_diskon = int(harga_sepatu_A * (1 - diskon_sepatu_A))
harga_sepatu_B_diskon = int(harga_sepatu_B * (1 - diskon_sepatu_B))

print(f"Harga sepatu A setelah mendapat diskon menjadi: {harga_sepatu_A_diskon}")
print(f"Harga sepatu B setelah mendapat diskon menjadi: {harga_sepatu_B_diskon}")
