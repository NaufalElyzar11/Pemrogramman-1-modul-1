HargaSepatuA = 400000
HargaSepatuB = 350000

DiskonA = 0.13  
DiskonB = 0.21  

HargaDiskonA = HargaSepatuA - (HargaSepatuA * DiskonA)
HargaDiskonB = HargaSepatuB - (HargaSepatuB * DiskonB)

print(f"Harga sepatu A adalah
      {HargaSepatuA}")
print(f"Harga sepatu B adalah {HargaSepatuB}")
print(f"Sepatu A mendapat diskon 13% sehingga harganya menjadi {HargaDiskonA:.0f}")
print(f"Sepatu B mendapat diskon 21% sehingga harganya menjadi {HargaDiskonB:.0f}")
