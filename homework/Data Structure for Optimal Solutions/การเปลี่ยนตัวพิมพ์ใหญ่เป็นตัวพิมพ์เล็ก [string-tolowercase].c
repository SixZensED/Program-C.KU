#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100], lower_str[100];
    int i = 0;
    
    printf("\n Enter the string : ");
    gets(str);
    while (str[i] != '\0')
    {
        lower_str[i] = tolower(str[i]);
        i++;
    }
    lower_str[i] = '\0';
    printf("\n The string converted into lower case is : ");
    puts(lower_str);
    return 0;
}
