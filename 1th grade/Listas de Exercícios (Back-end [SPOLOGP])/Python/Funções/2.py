def soma(a, b):
    S = a + b
    return S

print(soma(*(map(float, input("Digite 2 números: ").split()))))