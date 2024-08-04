import time

print("Mês (1 a 12)\n")

M=int(input("Mês (forma numérica [1 a 12]): "))

print("")

if (M==1):
    print("Janeiro")
elif (M==2):
    print("Fevereiro")
elif (M==3):
    print("Março")
elif (M==4):
    print("Abril")
elif (M==5):
    print("Maio")
elif (M==6):
    print("Junho")
elif (M==7):
    print("Julho")
elif (M==8):
    print("Agosto")
elif (M==9):
    print("Setembro")
elif (M==10):
    print("Outubro")
elif (M==11):
    print("Novembro")
elif (M==12):
    print("Dezembro")
else:
    print("Digite um valor entre 1 e 12!!")

print("")

time.sleep(3)