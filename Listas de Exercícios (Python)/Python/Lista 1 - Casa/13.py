print("Movimento Uniformemente Variado\n")

print("--Valores decimais devem ser digitados com (.)!--")

t=float(input("Tempo (s): "))

s0=2
v0=3
a=10

s=s0+v0*t+1/2*a*t**2; s="{:.2f}".format(s)

print(f"\nMetros: {s}m\n")