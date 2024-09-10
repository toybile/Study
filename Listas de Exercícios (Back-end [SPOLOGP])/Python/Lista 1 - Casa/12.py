print("Velocidade média\n")

print("--Valores decimais devem ser digitados com (.)!--")

e=float(input("Espaço percorrido (m): "))
t=float(input("Tempo gasto (s): "))

vm=e/t; vm="{:.2f}".format(vm)

print(f"\nVelocidade Média: {vm}m/s\n")