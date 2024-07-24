print("Vejamos quantos azulejos serão necessários para azulejar uma parede")
AP=float(input("Altura da parede: "))
LP=float(input("Largura da parede: "))
AA=float(input("Altura do azulejo: "))
LA=float(input("Largura do azulejo: "))
A2A=AA*LA
A2P=AP*LP
Azulejos=A2P/A2A
print(f"Serão necessários {Azulejos} azulejos para azulejar essa parede")