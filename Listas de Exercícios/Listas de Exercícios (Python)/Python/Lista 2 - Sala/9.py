print("2 números inteiros divisíveis por 4 e 5\n")

print("--Valores decimais devem ser digitados com (.)!--")

A=int(input("1º Número: "))
B=int(input("2º Número: "))

print("")

if (A%5==0 and A%4==0):
    print(f"{A} - É divisível por 4 e 5!")
else:
    print(f"{A} - NÃO é divisível por 4 e 5!")
if (B%5==0 and B%4==0):
    print(f"{B} - É divisível por 4 e 5!")
else:
    print(f"{B} - NÃO é divisível por 4 e 5!")

print("")