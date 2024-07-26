#include <stdio.h>

 main() {
   
    int i,j;
    int n=11;
    
    
    for ( i = 11; i <=14 ; i++) {
       
        for ( j = 11; j <= i; j++) {
            printf("%d ", n); 
            n++; 
        }
        printf("\n"); 
    }

  
}

