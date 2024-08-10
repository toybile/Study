print("Número menor ou igual a 50 e seu valor por uma multiplicação sucessiva por 3, antes que chegue a ser 250\n")

print("--Valores decimais devem ser digitados com (.)!--")
N=float(input("Número: "))

if (N<=50):
    while True:
        N=N*3
        if (N>=250):
            N=N/3
            break

print(f"\n{N}\n")