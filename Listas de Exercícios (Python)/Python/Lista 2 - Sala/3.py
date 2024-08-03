print("Diferença entre o maior e o menor número\n")

print("--Valores decimais devem ser digitados com (.)!--")

N1=float(input("Número 1: "))
N2=float(input("Número 2: "))

print("")

if (N1>N2):
    D=N1-N2
    print(f"{N1} - {N2} = {D:.2f}")
else:
    D=N2-N1
    print(f"{N2} - {N1} = {D:.2f}")

print("")