print("Aprovação - Aluno\n")

print("--Valores decimais devem ser digitados com (.)!--")

N1=float(input("Nota 1: "))
N2=float(input("Nota 2: "))
N3=float(input("Nota 3: "))

M=(N1+N2+N3)/3

print("\n===========")
print(f"Média: {M:.2f}")
print("===========")

print("")

if (M<6.0):
    print("Você foi reprovado!")
    print("\ninfo: Com média maior ou igual a 6 você é aprovado.")
else:
    print("Parabéns!!\nVocê foi aprovado!")
    print("\ninfo: Com média abaixo de 6 você é reprovado.")