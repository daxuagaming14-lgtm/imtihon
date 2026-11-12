#include <stdio.h>

int main() {
    int son, yigindi = 0;

    printf("Son: ");
    scanf("%d", &son);

    while (son != 0) {
        yigindi += son;
        printf("Son: ");
        scanf("%d", &son);
    }

    printf("Yig'indi: %d\n", yigindi);

    return 0;
}