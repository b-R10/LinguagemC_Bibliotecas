/*
// funções //

isdigit(<char>)     - confere se é um dígito
isalpha(<char>)     - confere se é alphanumperico
islower(char)       - confere se é minúsculo
isupper(char)       - confere se é maiúsculo
sizeof( )           - retorna o tamanho em bytes de um tipo de dado ou variável. retorna um inteiro
strlen( )           - verifica o tamanho da string    
strcpy(str1, str2)  - copia o conteúdo da str2 para str1
strcat(str1, str2)  - soma duas strings
strupr( )           - torna a string maiúscula
strlwr( )           - torna a string minúscula
strcmp(str1, str2)  - se str1 = str2 retorna = 0
                    - se str1 < str2 retorna < 0
                    - se str1 > str2 retorna > 0
pow(base, expoente) - expoente
sqrt()              - raiz quadrada
fgets(nome, tamanho, buffer)            
                    - recebe input do usuário
gets( )             - igual fgets(), mas, sem limite de tamanho
putchar( )          - insere um caractere no console. ex.: putchar('\n')
getc( )             - leitura de um caracter de qualquer fluxo de aruivo. ex.: getc(stdin)
getchar( )          - leitura de um caracter de entrada padrão
getch( )            - leitura de um caracter sem espera de enter e sem aparecer o caracter na tela
                        <conio.h>
getche( )           - leitura de um caracter sem espera de enter e o caracter aparece na tela
puts(*str)          - adiciona automaticamente uma nova linha ('\n') após a string e
                        retorna um valor positivo se a operação for bem-sucedida
atoi( )             - converte uma string(digito) em inteiro
atof( )             - converte uma string(float) em double float
itoa( )             - converte um inteiro para uma string
                        char *itoa(int valor, char *string, int base);
                            base 10 para decimal
                            base 2 para binário
rand( )             - gera um número pseudoaleatório
                        A função retorna um número inteiro pseudoaleatório no intervalo de 0 a RAND_MAX.
                        intervalo limitado:
                            int numeroAleatorioNoIntervalo = rand() % (limSup - limInf + 1) + limInf;
srand()             - Configura a semente para a geração de números pseudoaleatórios buscando variedade
                        srand(time(NULL));  - baseado no tempo da CPU. sempre gera valores novos
                        srand(seed); - repete os mesmos números nas execuções
ctime( )            - 
                        #include<time.h>
                        ex.:
                            time(&tempoAtual);                          tempo em seg
                            char *dataHora = ctime(&tempoAtual);        tempo convertido
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<locale.h>
#include<math.h>

void acentuacao(){
    setlocale(LC_ALL, "portuguese");
}

//////////////////////      a00.c       //////////////////////

int Conferir_Vogal_ou_Consoante(char caracter){
    char vogal[] = "aeiouAEIOU";

    for(int i = 0; vogal[i] != '\0'; i++){
            // Adicionando 32 para tratar vogais maiúsculas
        if(caracter == vogal[i] || caracter == vogal[i] + 32){
            return 1;
        }
    }

    return 0;
}

//////////////////////      a01.c       //////////////////////

void Tornar_Maiusculo(char palavra0[]){
    for(int i = 0; palavra0[i] != '\0'; i++){
        palavra0[i] = toupper(palavra0[i]);
    }
}

//////////////////////      a02.c       //////////////////////

void Separacao(char caracteres[], int tamanho)
{
    // declaração de todas as variáveis
    char vogais[11] = "aeiouAEIOU";
    
    char digitos0[tamanho];
    int digitos0_Contagem = 0;
    
    char vogais0[tamanho];
    int vogais0_Contagem = 0;

    char consoante[tamanho];
    int consoante_Contagem = 0;

    for(int i=0; i<tamanho; i++)
    {
        if(isdigit(caracteres[i]))
        {
            digitos0[digitos0_Contagem] = caracteres[i];
            digitos0_Contagem++;
        }
        else if(isalpha(caracteres[i]))
        {
            if(strchr(vogais, caracteres[i]) != NULL)
            {
                vogais0[vogais0_Contagem] = caracteres[i];
                vogais0_Contagem++;
            }
            else
            {
                consoante[consoante_Contagem] = caracteres[i];
                consoante_Contagem++;
            }
        }
    }

    // digitos0[digitos0_Contagem] = '\0';
    vogais0[vogais0_Contagem] = '\0';
    consoante[consoante_Contagem] = '\0';
    digitos0[digitos0_Contagem] = '\0';

    printf("Digitos:\n");
    for(int i = 0; i < digitos0_Contagem; i++)
        printf("\t%c\n", digitos0[i]);

    printf("Vogais:\n");
    for(int i = 0; i < vogais0_Contagem; i++)
        printf("\t%c\n", vogais0[i]);

    printf("Consoantes:\n");
    for(int i = 0; i < consoante_Contagem; i++)
        printf("\t%c\n", consoante[i]);

}

//////////////////////      a03.c       //////////////////////

void ValorReal(float *valor)
{
    scanf("%f", valor);
}

void EquacaoSegundoGrau(float *x1, float *x2)
{
    float a,b,c;
    puts("Insira o valor de a:");
    ValorReal(&a);
    puts("Insira o valor de b:");
    ValorReal(&b);
    puts("Insira o valor de c:");
    ValorReal(&c);

    // delta e bhaskara
    float delta = pow(b, 2) - 4*(a*c);
    *x1 = (- b + sqrt(delta))/(2*a);
    *x2 = (- b - sqrt(delta))/(2*a);
}