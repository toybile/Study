print("-------------------------")
print("       Banco IFSP")
print("-------------------------")
print(" 1 - Depósito")
print(" 2 - Saque")
print(" 3 - Extrato")
print(" 4 - Transferência")
print("-------------------------")
print("      E = Encerrar")
print("-------------------------")
E=input("Sua escolha: ")

if (E=="1"):
    print("\nOperação de depósito")
elif (E=="2"):
    print("\nOperação de saque")
elif (E=="3"):
    print("\nOperação de extrato")
elif (E=="4"):
    print("\nOperação de transferência")
elif (E=="E"):
    print("\nEncerrando operações...")