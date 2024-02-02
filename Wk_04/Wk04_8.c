#include <stdio.h>

main() {
    int a,b;
    char ch;
    printf("Do you want to:\n");
    printf("Add, Substract, Multiply, or Divide ? \n");
    printf("Enter first letter : ");
    ch = getch();
    printf("\n");
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    if ((ch == 'A') || (ch == 'a')) {
        printf("%d",a+b);
    } else if ((ch == 'S') || (ch == 's')) {
        printf("%d",a-b);
    } else if ((ch == 'M') || (ch == 'm')) {
        printf("%d",a*b);
    } else if ((ch == 'D') || (ch == 'd') && b!=0) {
        printf("%d",a/b);
    }
}