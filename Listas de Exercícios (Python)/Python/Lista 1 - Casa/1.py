print("Conversor: Real -> Dólar\n")

print("--Valores decimais devem ser digitados com (.)!--")

R=float(input("Valor (R$): "))

D=R/2.40; D="{:.2f}".format(D)

print(f"\nValor: ${D}\n")