#include <stdio.h>

main(void) {
    float x1,x2,x3,x4,x5,x6,average;
    int number;
    x1=x2=x3=x4=x5=x6=0.0f;
    printf("\nEnter up to six numbers terminated with a $ ?");
    number = scanf("%f%f%f%f%f%f",&x1,&x2,&x3,&x4,&x5,&x6);
    average = (x1+x2+x3+x4+x5+x6)/number;
    printf("\n Average of %d numbers = %f",number,average);
    getch();
}