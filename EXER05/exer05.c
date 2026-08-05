#include <stdio.h>

void calcular() {
    int numero1, numero2, resultado;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    resultado = (numero1 + numero2) - 5;

    printf("Resultado: %d\n", resultado);
}

int main() {
    calcular();
    return 0;
}