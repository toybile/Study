print("Média final do aluno\n")

print("--Valores decimais devem ser digitados com (.)!--")

N1=float(input("Nota - 1º Bimestre: "))
N2=float(input("Nota - 2º Bimestre: "))
N3=float(input("Nota - 3º Bimestre: "))
N4=float(input("Nota - 4º Bimestre: "))

M=(N1+N2+N3+N4)/4; M="{:.1f}".format(M)

print(f"\nMédia final: {M}\n")