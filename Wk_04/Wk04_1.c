#include <stdio.h>

main() {
    int ans;
    printf("What is 10 + 14 = ?");
    scanf("%d",&ans);
    if (ans == 10+14) {
        printf("Right !");
    } else {
        printf("Sorry, your'e wrong,");
        printf("The Answer is 24");
    }
    getch();
}