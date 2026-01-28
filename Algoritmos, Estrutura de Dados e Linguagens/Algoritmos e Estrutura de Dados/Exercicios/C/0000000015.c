// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: João recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, ele deverá pagar
// multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará do salário de João.

#include <stdio.h>

int main(){
    float salario,conta1,conta2;
    scanf("%f%f%f",&salario,&conta1,&conta2);
    float restante = salario - (0.02 * (conta1  + conta2));
    printf("%.2f",restante);
    return 0;
}