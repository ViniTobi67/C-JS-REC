#include <stdio.h>

void mostraMajoridade() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("MAIOR DE IDADE\n");
    } else {
        printf("MENOR DE IDADE\n");
    }
}

int main() {
    mostraMajoridade();
    return 0;
}