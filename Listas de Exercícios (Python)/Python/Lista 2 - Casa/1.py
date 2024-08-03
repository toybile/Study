print("Par ou Ímpar\n")

print("--Valores decimais devem ser digitados com (.)!--")

N=float(input("Informe um número: "))

N_int=int(N)

print("")

if (N-N_int==0):
    if (N==float):
        print("Números decimais não são pares nem ímpares")
    elif (N%2==0):
        print(f"{N} é par")
    else:
        print(f"{N} é ímpar")
else:
    print(f"{N} não é par nem ímpar!\nApenas números inteiros são pares ou ímpares.\nUm número decimal é nenhum dos dois!")

print("")