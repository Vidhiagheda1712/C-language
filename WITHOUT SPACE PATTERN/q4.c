#include<stdio.h>

main(){
	int i,j;
     int n=1;
    for ( i = 5; i >=1; i--)
    {
        for ( j = 1; j<= i; j++)
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
