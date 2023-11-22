/*Crie um algoritmo que receba o nome de três disciplinas, receba duas notas para cada disciplina e mostre:


- Exemplo:

Nome da disciplina: Lógica de programação
1ª nota:  8,0
2ª nota: 9,0
Média: 8,5

Verifique a situação do aluno considerando:
   - Média maior ou igual a 7,0: Aprovado.
   - Média maior igual a 5,0 e menor que 7,0: Recuperação.
   - Média menor que 5,0: Reprovado.
*/

//Includes: 
#include <stdlib.h>
#include <stdio.h>

//Variáveis:
int contador = 0;
char disciplina[3][200];
float notas[2][2];
int contador_2 = 0;
float somanotas = 0;
float medianotas[3];

int main(){

//Bloco do 1 For:
for(contador = 0; contador < 3; contador++){
printf("Insira a %d disciplina: \n", contador + 1);
scanf("%s", &disciplina[contador]);
    
    //Bloco do 2 For:

    for(contador_2 = 0; contador_2 < 2; contador_2++){
    printf("\n Insira a %d nota: ", contador_2 + 1);
    scanf("%f", &notas[contador][contador_2]);
    //Logo após o SCANF, Já se soma as notas
    //lembrando, no bloco em que as notas são recebidas
    //é do 2º contador e do 2º for
    //Então já soma logo!!

    somanotas += notas[contador][contador_2];
    
    } //Fim do Bloco do 2 for

    //As médias são feitas dentro do 1 FOR
    //Utilizando contador 1 e 2 e o soma notas.
    medianotas[contador] = somanotas/ contador_2;
    somanotas = 0;
    fflush(stdin);

}//Fim do primeiro FOR (contador1)

system("cls||clear");

//Exibindo informações:

for(contador = 0; contador < 3; contador++){
printf("\n Disciplina: %s", disciplina[contador]);
    for (contador_2 = 0; contador_2 < 2; contador_2++){
        printf("\n Notas %.1f", notas[contador][contador_2]);
    }
    
    
    printf("\n Media: %f", medianotas[contador]);
}

}