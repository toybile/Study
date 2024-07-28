print("Conversor: Dólar -> Real\n")

print("--Valores decimais devem ser digitados com (.)!--")

D=float(input("Valor ($): "))

R=D*2.40; R="{:.2f}".format(R)

print(f"\nValor: R${R}\n")