#include<stdio.h>

main(){
   for (int i = 1; i <=6; i++)
   {
      for (int j= 1; j <=5; j++)
      {
         if ((i == 1) ||
                (i == 2) || (i == 3) && (j == 1 || j == 5)) ||
                (i == 4 && (j == 2 || j == 4)) ||
                (i == 5 && (j == 2 || j == 3)) ||
                (i == 6 && (j == 3))
                 {
                printf("*");
                } 
            else {
                printf(" ");
            }
      }
      printf("\n");
   }
   

}
