// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercíco:  Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a mensagem de aprovado ou reprovado, considerando para aprovação média 7.

#include <stdio.h>

int main(){

    float media,nota1,nota2,nota3,nota4;
    scanf("%f%f%f%f",&nota1,&nota2,&nota3,&nota4);
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    if(media >= 7.0)
        printf("Aprovado.");
    else
        printf("Reprovado.");
}