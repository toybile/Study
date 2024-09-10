print("1 a 500 - Soma de todos os pares\n")

N_a=0

for N in range (2, 501, 2):
    S = N + N_a
    N_a = S

print(S, "\n")