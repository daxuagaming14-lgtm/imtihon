#include <stdio.h>

int main() {
int num1 , num2 , num3;
    
 printf(" birinchi sonni kiriting: ");
    scanf("%d", &num1 ) ;

     printf(" Ikkinchi sonni kiriting: ");
    scanf("%d", &num2 ) ;

     printf(" uchinchi sonni kiriting: ");
    scanf("%d", &num3 ) ;



    if (num1 >= num2 && num1 >= num3) {
        printf("Eng katta son: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("Eng katta son: %d\n", num2);
    } else {
        printf("Eng katta son: %d\n", num3);
    }
 return 0;
}