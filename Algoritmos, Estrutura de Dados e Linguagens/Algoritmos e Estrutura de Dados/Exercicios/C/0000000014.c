// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
// a) a idade dessa pessoa em anos;
// b) a idade dessa pessoa em meses;
// c) a idade dessa pessoa em dias;
// d) a idade dessa pessoa em semanas.

#include <stdio.h>

int main(){
    int anoatual,anonascimento;
    scanf("%d%d",&anonascimento,&anoatual);
    
    int anos = (anoatual - anonascimento), meses = 12 * anos, dias = 365 * anos, semanas = anos * 52;
    printf("%d anos\n",anos);
    printf("%d meses\n",meses);
    printf("%d semanas\n",semanas);
    printf("%d dias\n",dias);
    
    return 0;
}