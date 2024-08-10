print("5 Números inteiros - Menor e maior valor\n")

print("Digite-os: ")
N1=int(input("1º: "))
N2=int(input("2º: "))
N3=int(input("3º: "))
N4=int(input("4º: "))
N5=int(input("5º: "))

if (N1>N2 and N1>N3 and N1>N4 and N1>N5):
    print("Maior número: ", N1)
elif (N2>N1 and N2>N3 and N2>N4 and N2>N5):
    print("Maior número: ", N2)
elif (N3>N1 and N3>N2 and N3>N4 and N3>N5):
    print("Maior número: ", N3)
elif (N4>N1 and N4>N2 and N4>N3 and N4>N5):
    print("Maior número: ", N4)
elif (N5>N1 and N5>N2 and N5>N3 and N5>N4):
    print("Maior número: ", N5)
elif (N1==N2 or N1==N3 or N1==N4 or N1==N5 or N2==N3 or N2==N4 or N2==N5 or N3==N4 or N3==N5 or N4==N5):
    print("\nHá valores iguais! Eles são os maiores números!")

if (N1<N2 and N1<N3 and N1<N4 and N1<N5):
    print("Menor número: ", N1)
elif (N2<N1 and N2<N3 and N2<N4 and N2<N5):
    print("Menor número: ", N2)
elif (N3<N1 and N3<N2 and N3<N4 and N3<N5):
    print("Menor número: ", N3)
elif (N4<N1 and N4<N2 and N4<N3 and N4<N5):
    print("Menor número: ", N4)
elif (N5>N1 and N5>N2 and N5>N3 and N5>N4):
    print("Maior número: ", N5)
elif (N1==N2 or N1==N3 or N1==N4 or N1==N5 or N2==N3 or N2==N4 or N2==N5 or N3==N4 or N3==N5 or N4==N5):
    print("\nHá valores iguais! Eles são os menores números!")