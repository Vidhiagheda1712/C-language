#include <stdio.h>

main()
{
    char name[20];
    

    printf("Enter any string: ");
    gets(name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        int feq = 1;
        for (int j = i + 1; name[j] != '\0'; j++)
        {
            if(name[i] == name[j])
            {
                feq++;
                name[j] = '\0';
            }
        }
        printf("%c => %d\n",name[i],feq);
    
    }
}
