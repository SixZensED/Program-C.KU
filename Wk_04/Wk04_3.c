#include <stdio.h>

main() {
    int Number;
    float cost;
    printf("Enter number .....");
    scanf("%d",&Number);
    if (Number > 10) {
        cost = Number * 6.5;
    } else {
        cost = Number * 7;
    }
    printf("Cost = %2.2f\n",cost);
    getch();
}