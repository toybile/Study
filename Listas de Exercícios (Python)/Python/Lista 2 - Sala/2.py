print("Aprovação - Aluno\n")

print("--Valores decimais devem ser digitados com (.)!--")

N1 = float(input("Nota da primeira prova: "))
N2 = float(input("Nota da segunda prova: "))

M = (N1+N2)/2

print("\n==================")
print (f"Média inicial: {M}")
print("==================")

print("")

if (M>=6.0):
    print("Parabéns!!\nVocê foi aprovado!")
else:
    E = int(input("Nota do exame (faremos uma nova média com essa nota): "))

    M = (M+E)/2

    print("\n=================")
    print(f"Média final: {M}")
    print("=================")

    print("")
    if (M>=6.0):
        print("Parabéns!!\nVocê foi aprovado!")
    else:
        print("Você foi reprovado!")

print("")