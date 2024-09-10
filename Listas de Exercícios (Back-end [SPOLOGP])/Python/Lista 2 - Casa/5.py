import sys

print("Salário Líquido\n")

print("info: Para finalizar o programa, basta digitar (0) no Salário Bruto!\n")

print("--Valores decimais devem ser digitados com (.)!--")
print("--Devem ser digitado apenas o número dos valores!--")
print("")

S_B=1
F=1

while (S_B != 0):
    print("==================================")
    print(f"{F}º Funcionário:\n")

    S_B=float(input("Salário Bruto (R$): "))

    if (S_B == 0):
        sys.exit()

    H=int(input("Horas trabalhadas (mês): "))

    S_B_cálculos=S_B

# Adicionais ==================
    if (H>160):
        valor_por_hora = S_B/160
        H_valor = valor_por_hora * 1.5

        H_extra = H - 160
        S_B_cálculos = S_B_cálculos + H_valor * H_extra

# Descontos =================
    if (S_B_cálculos<800):
        S_B_cálculos = S_B_cálculos

    if (800<=S_B_cálculos<=1600):
        S_B_cálculos = S_B_cálculos * 0.87

    if (S_B_cálculos>1600):
        S_B_cálculos = S_B_cálculos * 0.78

# =============================================================
# =============================================================

    S_L=S_B_cálculos

    print(f"\nSalário Líquido: R${S_L}")

# =

    F=F+1

print("")