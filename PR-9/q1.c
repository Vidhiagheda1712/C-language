#include <stdio.h>

void main()
{
    FILE *fp;
    int i;

    fp = fopen("even.txt", "w");

    if (fp != "\0")
    {
        fprintf(fp, "Even Numbers :\n\n");
        for ( i = 50; i <=70; i++)
        {
            if (i % 2 == 0)
            {

                fprintf(fp, "%d  ", i);
            }
        }
    }

    else
    {
        fprintf(fp, "File is not working successfully...!!");
    }




    fp = fopen("odd.txt", "w");

    if (fp != "\0")
    {
        fprintf(fp, "Odd Numbers :\n\n ");
        for (i = 50; i <= 70; i++)
        {
            if (i % 2 == 1)
            {

                fprintf(fp, "%d  ", i);
            }
        }
    }

    else
    {
       fprintf(fp, "File is not working successfully...!!");
    }
}
