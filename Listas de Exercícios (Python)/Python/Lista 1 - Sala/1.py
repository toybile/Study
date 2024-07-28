import time
import sys

def main():

    print("==============================================")
    print("Litros que um carro (12km/L) gasta numa viagem")
    print("==============================================")
    print("--Valores decimais devem ser digitados com (.)!--")

    while True:
        T = input("\nTempo gasto na viagem (h): ")
        try:
            T = float(T)
            if T == 0:
                print("\n--Digite um número diferente de 0!--")
                continue
            elif T < 0:
                print("\n--Digite um número positivo!--")
                continue
            break
        except ValueError:
            print("\n--Digite apenas o número! (em algarismo)--")

    while True:
        V = input("\nVelocidade média (km/h): ")
        try:
            V = float(V)
            if V == 0:
                print("\n--Digite um número diferente de 0!--")
                continue
            elif V < 0:
                print("\n--Digite um número positivo!--")
                continue
            break
        except ValueError:
            print("\n--Digite apenas o número! (em algarismo)--\n ou\n--Digite o número decimal com (.)--")

    print("")

    D = T * V
    L_U = D / 12
    L_U = "{:.2f}".format(L_U)
    D = "{:.2f}".format(D)

    print("--------------------------------------------------------")
    print(f"Litros usados: {L_U} L\nDistância percorrida: {D} Km\nVelocidade média: {V} Km/h\nTempo Gasto: {T} h")
    print("--------------------------------------------------------")

    while True:
        reset = input("\nDeseja reiniciar o programa? (S/N)\n")
        if reset.upper() == "S":
            print("")
            print("O programa será reiniciado...")
            time.sleep(3)
            print("")
            main()
        elif reset.upper() == "N":
            print("")
            print("O programa encerrará em breve...")
            time.sleep(3)
            sys.exit()
        else:
            print("\n--Digite APENAS (S) ou (N)!--")

if __name__ == "__main__":
    main()