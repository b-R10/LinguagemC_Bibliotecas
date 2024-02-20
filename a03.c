/*
Faça um algoritmo que leia os coeficientes a, b e c referentes à equação do segundo grau (ax2+bx+c) e
exiba como resultado as raízes da equação. Exiba uma mensagem se não houver raiz real. Use a função 
pow( ) para potência e  sqrt( ) para a raiz quadrada.
*/

#include<stdio.h>
#include"library.h"

int main()
{
    acentuacao();
    float raiz1 = 0, raiz2 = 0;
    EquacaoSegundoGrau(&raiz1, &raiz2);
    printf("As raízes são:"
            "\n\tx1 = %f"
            "\n\tx2 = %f", raiz1, raiz2);
    return 0;
}