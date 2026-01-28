// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que receba o raio, calcule e mostre:
// a) o comprimento de uma esfera; sabe-se que c = 2 * p R;
// b) a área de uma esfera; sabe-se que A = p R2;
// c) o volume de uma esfera; sabe-se que v = ¾ * p R3.

#include <stdio.h>
#define pi 3.141592653589793

int main(){
    double r;
    scanf("%lf",&r);
    float comprimento = 2*pi*r,area = 2*pi*(r*r),volume = (3/4)*pi*(r*r*r);
    printf("Comprimento:%f\n",comprimento);
    printf("Area:%f\n",area);
    printf("Volume:%f\n",volume);
    return 0;
}