print("Tarifa\n")

S=float(input("Saldo: "))

if (S>=1000 and S<3000):
    S=S*1.8
elif (S>=3000 and S<5000):
    S=S*1.55
elif (S>=5000):
    S=S*1.25

print(f"\nSaldo final: {S}\n")