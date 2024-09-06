#include <stdio.h>


 void swap(int a ,int b){
    printf("Before Swapping :\n A = %d\n B = %d",a,b);
      int swap =a;
      a = b;
      b=swap;
     printf("\n");
     printf("After Swapping :\nA = %d\n B = %d",a,b);
 
  }

void main(){
     int a,b;

     printf("Enter the value of A :");
     scanf("%d",&a);
     printf("Enter the value of B :");
     scanf("%d",&b);
     printf("\n");
     
    
     swap(a,b);
     
  
}