print("Para ser aprovado, sua média deverá ser maior ou igual a 6.")
N1 = float(input("Digite a nota da primeira prova: "))
N2 = float(input("Digite a nota da segunda prova: "))
M = ((N1+N2)/2)
print (f"Sua média inicial é: {M}")
if (M>=6.0):
    print("Aprovado")
else:
    E = int(input("Digite a nota do exame para compor a média final: "))
    M = (M+E)/2
    print(f"Média final: {M}")
    if (M>=6.0):
        print("Aprovado")
    else:
        print("Reprovado")