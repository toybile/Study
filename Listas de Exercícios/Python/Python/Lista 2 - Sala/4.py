print("Triângulo\n")

print("--Valores decimais devem ser digitados com (.)!--")

A = float(input("Digite o lado A do triângulo: "))
B = float(input("Digite o lado B do triângulo: "))
C = float(input("Digite o lado C do triângulo: "))

print("")

if (A<B+C and B<C+A and C<B+A):
    print("Esses lados formam um triângulo!")
    if (A==B and B==C):
        print("Esse triângulo é Equilátero!")
    elif (A!=B and B!=C and C!=A):
        print("Esse triângulo é Escaleno!")
    elif (A==B or B==C or C==A):
        print("Esse triângulo é Isósceles!")
else:
    print("Esses lados não formam um triângulo!")

print("")