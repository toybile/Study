print("Média semestral do aluno\n")

print("--Valores decimais devem ser digitados com (.)!--")

P1=float(input("Prova 1: "))
P2=float(input("Prova 2: "))
A=float(input("Nota das atividades: "))

M=(P1*4+P2*4+A*2)/10; M="{:.1f}".format(M)

print(f"\nMédia semestral: {M}\n")