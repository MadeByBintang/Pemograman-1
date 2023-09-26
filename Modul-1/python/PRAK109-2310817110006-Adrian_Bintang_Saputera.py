jumlah_pasukan_yu_zhong = int(input("Jumlah Pasukan yang dibawa YuZhong: "))
jumlah_pahlawan = int(input("Jumlah Pahlawan: "))

jumlah_pasukan_yang_harus_dikalahkan_setiap_pahlawan = (
    jumlah_pasukan_yu_zhong // jumlah_pahlawan
)

print(
    f"Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah {jumlah_pasukan_yang_harus_dikalahkan_setiap_pahlawan} pasukan"
)
