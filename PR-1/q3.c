#include<stdio.h>

main(){
    int first, second, third;
    
    printf("Enter the Value of First");
    sacnf("%d" ,&first);
    
    printf("Enter the Value of Second");
    sacnf("%d" ,&second);
    
    third = 180 -(first + second);
    
    printf("%d" ,third); 
    
}
