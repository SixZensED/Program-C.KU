#include <stdio.h>

main() {
    int num1,num2,sum;
    printf("enter number 1 : ");
    scanf("%d",&num1);
    printf("enter number 2 : ");
    scanf("%d",&num2);
    num1++;
    ++num2;
    sum = num1 + num2;
    printf("%d + %d = %d\n",num1,num2,sum);
}