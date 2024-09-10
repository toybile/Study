L = []
a = "S"

while True:
    if a != "S":
        break

    print("--Digite um número e dê Enter, siga o mesmo processo até que queira Parar, para tal, insira: 'P'--\n")

    while True:
        N=input("-> ")

        if (N.upper() == "P"):
            break

        try:
            N_f = float(N)
            L.append(N_f)

        except ValueError:
            print("\nDigite apenas números ou 'P'!\n")

    if (len(L) > 0):
        print(f"\n\nNúmeros inseridos: {L}\n#=#")


        print("=================================================================================================")

        # Média aritmética
        m = sum(L) / len(L)

        print(f"Média aritmética: {m:.2f}")

        # Maior e menor elementos
        maior = max(L)
        menor = min(L)

        print(f"\nMaior número: {maior}\nMenor número: {menor}\n")

        # Total de elementos por faixa
        faixa_1 = [x for x in L if x < 0]
        faixa_2 = [x for x in L if 0 <= x < 15]
        faixa_3 = [x for x in L if 15 <= x < 100]
        faixa_4 = [x for x in L if x >= 1000]
        faixa_5 = [x for x in L if 100 <= x < 1000]

        faixa_1.sort()
        faixa_2.sort()
        faixa_3.sort()
        faixa_4.sort()
        faixa_5.sort()

        print(f"Faixa 1 -> {len(faixa_1)} elemento(s): {faixa_1}")
        print(f"Faixa 2 -> {len(faixa_2)} elemento(s): {faixa_2}")
        print(f"Faixa 3 -> {len(faixa_3)} elemento(s): {faixa_3}")
        print(f"Faixa 4 -> {len(faixa_4)} elemento(s): {faixa_4}")
        print(f"Faixa 5 -> {len(faixa_5)} elemento(s): {faixa_5}")

        # Pares | Ímpares
        Pares = [x for x in L if x % 2 == 0]
        Ímpares = [x for x in L if x % 2 != 0]

        Pares.sort()
        Ímpares.sort()

        print(f"\n{len(Pares)} pares: {Pares}")
        print(f"{len(Ímpares)} ímpares: {Ímpares}\n")

    else:
        print("\nNenhum número foi inserido!\n")

    #=#
    print("#")

    while True:
        a=str(input("Deseja reiniciar o Programa? (S/N): ")).upper()

        if a == "S" or a == "N":
            break

        else:
            print("\nDigite 'S' ou 'N'!\n")

    if a == "S":
        print("\n\n#------------------------------------------------------------------------------------------------#")

    L.clear()