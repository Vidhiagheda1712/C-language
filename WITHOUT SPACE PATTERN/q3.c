#include<stdio.h>

main(){

    for (int i = 1; i <=5; i++)
    {
        for (int j = i; j<= 5; j++)
        {
           if(i%2==1){
            printf("a ");
           }
           else{
            printf("%d ",i);
           }

        }
        
     printf("\n");
    }
    
}
