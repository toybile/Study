print("Vejamos o volume e a área da superfície de uma esfera\n")

print("--Valores decimais devem ser digitados com (.)!--")

r=float(input("Raio da esfera: "))

V=4/3*3.14*r**3; V="{:.2f}".format(V)
A=4*3.14*r**2; A="{:.2f}".format(A)

print(f"\nVolume: {V}(medida)³\nÁrea (Superfície): {A}(medida)²\n")