print("Prestação atrasada\n")

print("--Valores decimais devem ser digitados com (.)!--")

V=float(input("Valor: "))
T=float(input("Tempo de atraso (unidade de tempo em que a Taxa é cobrada): "))
Ta=float(input("Taxa (em forma de número, exemplo: 90% --> 1.9): "))

P=V+(V*(Ta/100)*T); P="{:.2f}".format(P)

print(f"\nPrestação: R${P}\n")