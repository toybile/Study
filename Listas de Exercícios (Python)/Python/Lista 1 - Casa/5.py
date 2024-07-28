print("IMC\n")

print("--Valores decimais devem ser digitados com (.)!--")

h=float(input("Sua altura (m): "))
m=float(input("Sua massa (kg): "))

IMC=m/h**2; IMC="{:.2f}".format(IMC)

print(f"\nSeu IMC é {IMC}\n")