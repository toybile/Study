print("Conversor: Fahrenheit -> Graus Centígrados\n")

print("--Valores decimais devem ser digitados com (.)!--")

F=float(input("Graus (Fahrenheit): "))

C=(((F-32)*5)/9); C="{:.1f}".format(C)

print(f"\nGraus (Centígrados): {C}ºC\n")