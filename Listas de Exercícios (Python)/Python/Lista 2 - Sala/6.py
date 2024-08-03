print("Equação de 2º grau\n")

print("--Valores decimais devem ser digitados com (.)!--")

A=float(input("A: "))
B=float(input("B: "))
C=float(input("C: "))

print("")

D=B**2-4*A*C

if (D<0):
    print("Ambas as raízes da equação não são números Reais!")
elif (D==0):
    print("Ambas as raízes da equação são iguais!")
else:
    print("Ambas as raízes da equação são Reais e distintas!")

X1=(-B+D**0.5)/2*A
print(f"Raíz 1: {X1:.2f}")

X2=(-B-D**0.5)/2*A
print(f"Raíz 2: {X2:.2f}")

print("")