print("Arredondando médias\n")



M=float(input("Média a ser arredondada: "))

M_int = int(M)
M_decimal = M - M_int
m = M_int + 1
soma_M = m - M_decimal

print("")

if (M_decimal>0.5):
    print(f"Média arredondada: {M_decimal+soma_M}")
else:
    print(f"Média arredondada: {M-M_decimal}")

print("")