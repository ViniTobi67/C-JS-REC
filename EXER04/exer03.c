#include <stdio.h>

void area() {
    float lado1, lado2, resultado;

    printf("Digite o primeiro lado: ");
    scanf("%f", &lado1);

    printf("Digite o segundo lado: ");
    scanf("%f", &lado2);

    resultado = lado1 * lado2;

    printf("Área = %.2f\n", resultado);
}

int main() {
    area();
    return 0;
}