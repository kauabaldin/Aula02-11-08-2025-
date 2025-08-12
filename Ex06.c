#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2, dif, result;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe segundo numero: ");
    scanf("%d", &num2);

    dif = num1 - num2;
    result = pow(dif);
    printf("O resultado eh: %d", result);

    return 0;
}