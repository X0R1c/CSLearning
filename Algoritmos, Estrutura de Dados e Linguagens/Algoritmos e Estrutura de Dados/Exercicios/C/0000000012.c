// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule e mostre a quantidade de salários mínimos que esse funcionário ganha.

#include <stdio.h>

int main(){
    float salario,salariominimo,quantidade;
    scanf("%f%f",&salario,&salariominimo);
    quantidade = salario / salariominimo;
    printf("%f",quantidade);
    return 0;
}