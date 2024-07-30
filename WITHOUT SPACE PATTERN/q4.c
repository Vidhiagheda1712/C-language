#include<stdio.h>

main(){
     int n=1;
    for (int i = 5; i >=1; i--)
    {
        for (int j = 1; j<= i; j++)
        {
           if(n%2==0){
           printf("%c ",64+n);
           n++;
           
       }
           else{
           printf("%d ",n);
           n++;

          
       }
     
        }
        printf("\n");
    }
    
}
