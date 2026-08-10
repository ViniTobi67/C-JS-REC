#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, resp;

    printf("área do quadrado\n");
    printf("Digite o primeiro lado do quadrado: ");
    scanf("%d", &num1);
    printf("Digite o segundo lado do quadrado: ");
    scanf("%d", &num2);

    resp = (num1 * num2);

    printf("%d\n", resp);

    system("pause");
    return 0;
}