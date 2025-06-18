n=int(input("Insira um número inteiro e positivo: "))

print("\nPares:")
for n in range (1, n):
    if (n%2==0):
        print(n)

print("\nÍmpares:")
for n in range (1, n):
    if (n%2!=0):
        print(n)