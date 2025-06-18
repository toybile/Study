print("Tabuada\n")

print("Qual a tabuada que sua humilde pessoa deseja?\n")

print("--Valores decimais devem ser digitados com (.)!--")
T=float(input("Tabuada: "))

print(f"\nTabuada do {T}:")

for M in range (11):
    print(f"{T} x {M} = {T*M}")

print("")