print("Quantos litros um carro que faz 12km/L gasta numa viagem")
T=float(input("Tempo gasto na viagem (h): "))
V=float(input("Velocidade média (digite apenas o número (km/h)): "))
D=T*V
L_U=D/12
print(f"Litros usados: {L_U} L | Distância percorrida: {D} Km | Velocidade média: {V} Km/h | Tempo Gasto: {T} h")