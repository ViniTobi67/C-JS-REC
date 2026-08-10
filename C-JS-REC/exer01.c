#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[50];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Seu nome eh: ");
    printf("%s\n", nome);

    system("pause");
    return 0;
}