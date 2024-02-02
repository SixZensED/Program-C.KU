#include <stdio.h>

main() {
    int x,y;
    printf("enter y :");
   scanf("%d",&y);
    x = (y = y-5,30/y);
    printf("x = %d\ty = %d\n",x,y);
    getch();
}