print("3 números inteiros divisíveis por 2 e 3\n")

print("--Valores decimais devem ser digitados com (.)!--")

A=int(input("1º Número: "))
B=int(input("2º Número: "))
C=int(input("3º Número: "))

print("")

if (A%3==0 and A%2==0):
    print(f"{A} - É divisível por 2 e 3!")
else:
    print(f"{A} - NÃO é divisível por 2 e 3!")
if (B%3==0 and B%2==0):
    print(f"{B} - É divisível por 2 e 3!")
else:
    print(f"{B} - NÃO é divisível por 2 e 3!")
if (C%3==0 and C%2==0):
    print(f"{C} - É divisível por 2 e 3!")
else:
    print(f"{C} - NÃO é divisível por 2 e 3!")

print("")