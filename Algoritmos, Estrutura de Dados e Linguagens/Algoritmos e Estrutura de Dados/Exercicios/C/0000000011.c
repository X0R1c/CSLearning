// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que calcule e mostre a área de um losango. sabe-se que: A = (diagonal maior * diagonal menor)/2.

#include <stdio.h>

int main(){
    float area,diagonalmenor,diagonalmaior;
    scanf("%f%f",&diagonalmenor,&diagonalmaior);
    area = (diagonalmaior + diagonalmenor) / 2;
    printf("%f",area);
    return 0;
}