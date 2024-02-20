/*
Implementar uma solução para converter para maiúsculo as letras de um vetor de 5 posições.
O usuário deverá informar as letras e em seguida serão impressas em maiúsculo
*/

#include"library.h"

int main(){
    // inserção da palavra
    char palavra[25];
    printf("Insira uma palavra:\n");
    scanf("%s", &palavra);

    // chamada da função da biblioteca library.h
    Tornar_Maiusculo(palavra);
    printf("%s", palavra);

    return 0;
}