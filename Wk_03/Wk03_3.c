#include <stdio.h>

main() {
    int x,y,sum;
    printf("enter number : ");
    scanf("%d",&x);
    y = x > 8? 20 :15;
    printf("y is %d \n",y);
    sum = x + y;
    printf("sum = %d\n",sum);
    getch();
}