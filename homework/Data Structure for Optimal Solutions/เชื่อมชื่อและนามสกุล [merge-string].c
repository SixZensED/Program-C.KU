#include <stdio.h>
#include <conio.h>

int main()
{
    char firstname[100], lastname[50], fullname[150];
    int i = 0, j = 0;

    printf("\n Enter the first name : ");
    gets(firstname);
    printf("\n Enter the last name : ");
    gets(lastname);
    
    // input your code here
    while (firstname[i] != '\0') {
        fullname[i] = firstname[i];
        i++;
    }
    fullname[i] = ' ';
    i++;
    while (lastname[j] != '\0') {
        fullname[i] = lastname[j];
        j++;
        i++;
    }
    fullname[i] = '\0';
    printf("\n After appending, full name is : ");
    puts(fullname);
    getch();
    return 0;
}
