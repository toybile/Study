def segundo_grau(a, b, c):
    D = b**2 - 4*a*c

    if D < 0:
        return "Sem raízes reais"
    
    if D == 0:
        R = -b/(2*a)
        return f"Há 2 raízes Reais e iguais: {R}"
    
    else:
        R1 = (-b + D**0.5) / (2*a)
        R2 = (-b - D**0.5) / (2*a)
        return f"1ª Raíz: {R1}\n2ª Raiz: {R2}"

print(segundo_grau(*(map(float, input("Digite os coeficientes (a b c) da equação de 2º Grau: ").split()))))