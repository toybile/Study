print("Fibonacci - até 15º Termo\n")

a=1
atual=2

print("1\n1\n2")
for F in range (3, 15):
    atual_m = atual
    atual = atual + a

    print(atual)

    a = atual_m

print("")