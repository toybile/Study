const dolar = 5.25, euro = 5.70, bitcoin = 350000;

// Função para atualizar os valores
function updateValues() {
    // Obter o valor digitado em BRL
    let real = parseFloat(document.getElementById("valor-brl").value);

    // Verificar se o valor é um número válido
    if (isNaN(real) || real <= 0) {
        // Se o valor for inválido (campo vazio ou negativo), resetar os valores nas cards
        document.getElementById("valor-dolar").innerHTML = "$ 0.00";
        document.getElementById("valor-euro").innerHTML = "€ 0.00";
        document.getElementById("valor-btc").innerHTML = "₿ 0.00000";
        return; // Retorna e não faz mais nada
    }

    // Calcular as conversões
    let dolarValue = real / dolar;
    let euroValue = real / euro;
    let bitcoinValue = real / bitcoin;

    // Atualizar os valores nas cards
    document.getElementById("valor-dolar").innerHTML = `$ ${dolarValue.toFixed(2)}`;
    document.getElementById("valor-euro").innerHTML = `€ ${euroValue.toFixed(2)}`;
    document.getElementById("valor-btc").innerHTML = `₿ ${bitcoinValue.toFixed(5)}`;
}

// Adicionar o event listener para quando o valor mudar
document.getElementById("valor-brl").addEventListener("input", updateValues);
