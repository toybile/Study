print("Ordem crescente\n")

print("--Valores decimais devem ser digitados com (.)!--")

A=float(input("Valor 1: "))
B=float(input("Valor 2: "))
C=float(input("Valor 3: "))

print("")

if (A>B and C):
    print(f"Maior número: {A}")
    if (B>C):
        print(f"Número do meio: {B}")
        print(f"Menor número: {C}")
    else:
        print(f"Número do meio: {C}")
        print(f"Menor número: {B}")
elif (B>A and C):
    print(f"Maior número: {B}")
    if (A>C):
        print(f"Número do meio: {A}")
        print(f"Menor número: {C}")
    else:
        print(f"Número do meio: {C}")
        print(f"Menor número: {A}")
else:
    print(f"Maior número: {C}")
    if (B>A):
        print(f"Número do meio: {B}")
        print(f"Menor número: {A}")
    else:
        print(f"Número do meio: {A}")
        print(f"Menor número: {B}")

print("")