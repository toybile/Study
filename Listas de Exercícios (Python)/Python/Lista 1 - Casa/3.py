print("Quantidade necessária de azulejos para azulejar uma parede\n")

print("--Valores decimais devem ser digitados com (.)!--")
print("--Utilize a mesma unidade de medida!--")

AP=float(input("Altura da parede: "))
LP=float(input("Largura da parede: "))
AA=float(input("Altura do azulejo: "))
LA=float(input("Largura do azulejo: "))

A2A=AA*LA
A2P=AP*LP

Azulejos=A2P/A2A; Azulejos="{:.2f}".format(Azulejos)

print(f"\nSerão necessários {Azulejos} azulejos para azulejar essa parede\n")