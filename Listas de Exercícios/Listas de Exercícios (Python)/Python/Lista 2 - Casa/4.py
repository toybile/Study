print("Maior, menor e número do meio\n")

print("--Valores decimais devem ser digitados com (.)!--")

A=float(input("1º número: "))
B=float(input("2º número: "))
C=float(input("3º número: "))
print("")

if (A>B and A>C):
    print(f"Maior número: {A}")
    if (B>C):
        print(f"Número do meio: {B}")
        print(f"Menor número: {C}")
    else:
        print(f"Número do meio: {C}")
        print(f"Menor Número: {B}")

if (B>C and B>A):
    print(f"Maior número: {B}")
    if (C>A):
        print(f"Número do meio: {C}")
        print(f"Menor número: {A}")
    else:
        print(f"Número do meio: {A}")
        print(f"Menor número: {C}")

if (C>A and C>B):
    print(f"Maior número: {C}")
    if (B>A):
        print(f"Número do meio: {B}")
        print(f"Menor número: {A}")
    else:
        print(f"Número do meio: {A}")
        print(f"Menor número: {B}")

print("")