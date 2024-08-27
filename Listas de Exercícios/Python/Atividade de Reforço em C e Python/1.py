print("Salário-Aumento\n")

Name=str(input("Nome: "))
S_A=float(input("Salário: "))

A=0

if (S_A<401):
    A=1.15
    N_S = S_A * A

elif (401<=S_A<701):
    A=1.12
    N_S = S_A * A

elif (701<=S_A<1001):
    A=1.1
    N_S = S_A * 1.1

elif (1001<=S_A<1801):
    A=1.07
    N_S = S_A * A

elif (1801<=S_A<2501):
    A=1.04
    N_S = S_A * A

A = A*100
A -= 100

print("\n============================")
print(f" {Name}\n\nAumento: {A:.2f}%\nSalário Atual: R${S_A:.2f}\nNovo Salário: R${N_S:.2f}")
print("==============================")