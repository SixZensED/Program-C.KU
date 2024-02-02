#include <stdio.h>

main() {
    int i;
    printf("Enter a number between 1 and 4: ");
    scanf("%d",&i);
    switch(i) {
        case 1: i=i+1; printf("i=%d",i);
        break;
        case 2: i=i*2; printf("i=%d",i);
        break;
        case 3: i=i-3; printf("i=%d",i);
        break;
        case 4: i=i/4; printf("i=%d",i);
        break;
        default : printf("unrecognized number");
    }
    getch();
}