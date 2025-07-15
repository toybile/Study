//criando uma classe
class Carrobixo131 {
    constructor(marca, modelo, ano) {
        this.marca = marca;
        this.modelo = modelo;
        this.ano = ano;
    }

    //criando detalhes do carro
    detalhesDoCarro(){
        return `Carro: ${this.marca} ${this.modelo}\nAno: ${this.ano}`;
    }
}

//criar o meu objeto
const meuCarro = new Carrobixo131('Chevrolet', 'Corsa', '2022')

//exibindo o resultado
console.log(meuCarro.detalhesDoCarro())