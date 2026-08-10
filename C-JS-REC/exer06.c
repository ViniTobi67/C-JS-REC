#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, resp;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    resp = (num1 + num2) - 5;

    printf("%d\n", resp);

    system("pause");
    return 0;
}