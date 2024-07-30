#include<stdio.h>

main(){

    for (int i = 1; i<=5; i++)
    { 
         for (int s = 5; s <i; s--)
         {
          for (int j = i; j <=5; j++)
          {
           if(j % 2==0)
           {
              printf("%d",i*i*i);
           } 
           else{
               printf("%d",i);
           }
          }
          
         }
         printf("\n");
         
    }
    
}