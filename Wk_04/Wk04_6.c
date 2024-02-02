#include <stdio.h>

main() {
    int magic =123;
    int guess;
    printf("enter your magic number : ");
    scanf("%d",&magic);
    system("cls");
    printf("enter your guess");
    scanf("%d",&guess);
    if (guess == magic) {
        printf("*** Right ***");
        printf("%d is the magic number",magic);
    } else {
        (guess > magic) ? printf("High") : printf("Low");
    }
    getch();
}