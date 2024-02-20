/*
Implementar um algoritmo que leia um caractere.
Se for uma vogal, imprimir a mensagem “vogal”, caso contrário, imprimir a mensagem “consoante”.
Considere maiúsculas e minúsculas
*/

#include<stdio.h>
#include"library.h"

int main(){
    char letra;
    printf("Insira um caractere:");
    scanf("%c", &letra);
    int resultado = Conferir_Vogal_ou_Consoante(letra);
    if(resultado == 1)
        printf("É vogal.");
    else
        printf("É consoante.");
    return 0;
}