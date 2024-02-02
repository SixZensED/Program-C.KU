#include <stdio.h>

int x;
main() {
    printf("input number : ");
    scanf("%d",&x);
    if (x < 0) {
        x = x *-1;
    }
    printf("input %d",x);
    getch();
}