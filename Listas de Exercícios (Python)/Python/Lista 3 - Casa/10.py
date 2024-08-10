print("Calculadora")

while True:
    print("\n\n============================================================")
    print("info: Escolha a operação com base no símbolo em parênteses!\n")
    print(" S=Sair do Programa")
    print("--------------------")
    print("   Soma       |  (+)")
    print(" Subtração    |  (-)")
    print("Multiplicação |  (*)")
    print("  Divisão     |  (/)")
    print("--------------------")
    OP=str(input("Operação: "))

    if(OP=="S"):
        break

    print("\n--Valores decimais devem ser digitados com (.)!--")
    print("Digite os valores que serão utilizados no cálculo, em ordem!")
    N1=float(input("1º Valor: "))
    N2=float(input("2º Valor: "))

    print("")

    if (OP=="+"):
        print(f"{N1} + {N2} = {N1+N2}")
    elif (OP=="-"):
        print(f"{N1} - {N2} = {N1-N2}")
    elif (OP=="*"):
        print(f"{N1} * {N2} = {N1*N2}")
    elif (OP=="/"):
        print(f"{N1} / {N2} = {N1/N2}")

print("")