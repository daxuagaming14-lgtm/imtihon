#include <stdio.h>

int main() {
    float a, b;
    char amal;

    printf("Birinchi son: ");
    scanf("%f", &a);
    printf("Amal (+, -, *, /): ");
    scanf(" %c", &amal);
    printf("Ikkinchi son: ");
    scanf("%f", &b);

    switch (amal) {
        case '+':
            printf("Natija: %.2f\n", a + b);
            break;
        case '-':
            printf("Natija: %.2f\n", a - b);
            break;
        case '*':
            printf("Natija: %.2f\n", a * b);
            break;
        case '/':
            if (b == 0)
                printf("Nolga bo'lib bo'lmaydi!\n");
            else
                printf("Natija: %.2f\n", a / b);
            break;
        default:
            printf("Noto'g'ri amal!\n");
    }

    return 0;
}