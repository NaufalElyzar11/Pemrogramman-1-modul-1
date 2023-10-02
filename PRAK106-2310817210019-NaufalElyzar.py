a = 4
b = 8
c = 3

print(f"Variabel a bernilai {a}")
print(f"Variabel b bernilai {b}")
print(f"Variabel c bernilai {c}")

ApakahASamaDenganB = a == b
ApakahBSamaDenganC = b > c
ApakahCSamaDenganA = a != c

print(f"Apakah a sama dengan b ? jawabannya adalah {int(ApakahASamaDenganB)}")
print(f"Apakah b lebih besar dari c ? jawabannya adalah {int(ApakahBSamaDenganC)}")
print(f"Apakah a tidak sama dengan c ? jawabannya adalah {int(ApakahCSamaDenganA)}")
