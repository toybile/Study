print("Área e comprimento de uma circunferência\n")

print("--Valores decimais devem ser digitados com (.)!--")

r=float(input("Raio da circunferência: "))

A=3.14*r**2; A="{:.2f}".format(A)
C=2*3.14*r; C="{:.2f}".format(C)

print(f"\nÁrea: {A}(medida)²\nComprimento: {C}(medida)\n")