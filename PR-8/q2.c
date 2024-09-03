#include <stdio.h>

int Cube(int *a)
{
    return *a * *a * *a;
}
void main()
{

    int row, col;

    printf("Enter Row Size :");
    scanf("%d", &row);
    printf("Enter Column Size :");
    scanf("%d", &col);

    int a[row][col];
    printf("\n");
    printf("Enter array elements:\n");
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    printf("Array :\n");
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Cubes of all elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d  ", Cube(&a[i][j]));
        }
        printf("\n");
    }
}
