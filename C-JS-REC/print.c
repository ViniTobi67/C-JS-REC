#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;
    char nome[50];

    printf("==Print nome e idade==\n");
    
    printf("Digite o seu nome: ");
    fgets(nome, 50, stdin);
   
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    
    printf("Seu nome é %s e sua idade é %d", nome, idade);

    system("pause");
    return 0;
}