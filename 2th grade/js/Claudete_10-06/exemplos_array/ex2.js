const alunos = [
    {aluno: 'Henrique', nota: 8},
    {aluno: 'Anabela', nota: 10},
    {aluno: 'Fernandez', nota: 10},
    {aluno: 'Bianca', nota: 9},
]

let index = 0;
let somaDasNotas = 0;
let totalAlunos = alunos.length;

do {
    somaDasNotas += alunos[index].nota;

    console.log(alunos[index]);

    index ++;

} while(index < totalAlunos);

let media = somaDasNotas / totalAlunos

console.log("\nA média da turma é: " +media);