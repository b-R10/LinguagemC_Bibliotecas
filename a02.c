/*
Implementar uma solução para separar letras de números.
O usuário deverá informar 7 caracteres, os quais serão armazenados em um vetor.
Na sequência, imprima os elementos do vetor utilizando as mensagens:
    dígito, vogal, consoante, de acordo com o caractere lido
*/

#include<stdio.h>
#include"library.h"

int main(){
    acentuacao();

    int n = 7;
    char vetor[n];

    printf("Insira 7 caracteres:\n");
    scanf("%s", vetor);

    Separacao(vetor, n);

    return 0;
}