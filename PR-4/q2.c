#include <stdio.h>

int main() {
    int rows = 4; 
    int num = 11;
    int i,j;
    
    
    for ( i = 1; i <= rows; i++) {
       
        for ( j = 1; j <= i; j++) {
            printf("%d ", num); 
            num++; 
        }
        printf("\n"); 
    }

  
}

