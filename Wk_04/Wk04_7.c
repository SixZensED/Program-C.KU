#include <stdio.h>

main() {
    int x;
    printf("Enter Score (0 .. 100) :");
    scanf("%d",&x);
    if (x >= 90) {
        printf("Excellent");
    } else if ( x >= 80) {
        printf("Good");
    } else if (x >= 70) {
        printf("Fair");
    } else {
        printf("Fail");
    }
    getch();
}