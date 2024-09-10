print("Número Inteiro - Distância (Número-chave)\n")

N=int(input("Informe um número de 0 a 100: "))

N_C=50
D=N-N_C

if(D<0):
    D=D*-1

print(f"\nA distância entre o número chave e o número informado é: {D}\n")