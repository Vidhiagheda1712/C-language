#include<stdio.h>

main(){
    int i,j;
    for ( i = 1; i <=5; i++)

    {
        
        
        for ( j = i; j<= 5; j++)
        {
           if(i%2==1){
            printf("%c ",i+96);
           }
           else{
            printf("%d ",i);
           }

        }
        
     printf("\n");
    }
    
}
