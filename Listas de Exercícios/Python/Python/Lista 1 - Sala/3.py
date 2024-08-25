print("Volume de uma lata (cilindro)\n")

print("--Valores decimais devem ser digitados com (.)!--")

print("--utilize a mesma unidade de medida!--")
h=float(input("Altura: "))
r=float(input("Raio da circunferência do círculo da base: "))

V=h*r*3.14159; V="{:.2f}".format(V)

print(f"\nVolume da lata: {V}(medida)³\n")