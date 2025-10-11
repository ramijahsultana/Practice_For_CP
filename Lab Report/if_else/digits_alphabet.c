#include<stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    if(c >= 65 && c <=90)
        printf("Lowercase letter\n");
    else if(c >= 97 && c <= 122)
        printf("Uppercase letter\n");
    else if(c >= 48 && c <= 57)
        printf("Digit\n");
    else
        printf("Special character\n");

    return 0;
}                       