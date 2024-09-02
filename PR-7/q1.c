#include <stdio.h>

void add()
{
    int a, b;
    printf("Enter the value of A:- ");
    scanf("%d", &a);
    printf("Enter the value of B:- ");
    scanf("%d", &b);
    int ans;
    ans = a + b;
    printf("The addition is %d\n", ans);
}
void sub()
{
    int a, b;
    printf("Enter the value of A:- ");
    scanf("%d", &a);
    printf("Enter the value of B:- ");
    scanf("%d", &b);
    int ans;
    ans = a - b ;
    printf("The subtraction is %d\n", ans);
}
void mul()
{
    int a, b;
    printf("Enter the value of A:- ");
    scanf("%d", &a);
    printf("Enter the value of B:- ");
    scanf("%d", &b);
    int ans;
    ans = a * b;
    printf("The multipication is %d\n", ans);
}
void div()
{
    int a, b;
    printf("Enter the value of A:- ");
    scanf("%d", &a);
    printf("Enter the value of B:- ");
    scanf("%d", &b);
    int ans;
    ans = a / b;
    printf("The division is %d\n", ans);
}
void modul()
{
    int a, b;
    printf("Enter the value of A:- ");
    scanf("%d", &a);
    printf("Enter the value of B:- ");
    scanf("%d", &b);
    int ans;
    ans = a % b;
     printf("The modulus is %d\n", ans);
}
   


void main()
{
    int choice;

    do
    {
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %\n");
        printf("Press 0 for the exit\n");

        printf("Enter Your Choice:- ");
        scanf("%d", &choice);
          switch (choice)
            {
            case 1:
                add();
                break;
            case 2:
                sub();
                break;
            case 3:
                mul();
                break;
            case 4:
                div();
                break;
            case 5:
                modul();
                break;
            default:
                printf("please enter valid choice...");
            }
      }
    
     while (choice != 0);
}
