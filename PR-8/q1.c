#include <stdio.h>

void main()
{
    char name[20];
    printf("Enter Your Name : ");
    scanf("%[^\n]", &name);

    int length = 0;
    char *n = name;

    while (*n != '\0')
    {
        length++;
        n++;
    }

    printf("The length of a string is : %d", length);
}
