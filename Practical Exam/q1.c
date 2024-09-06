#include<stdio.h>

void main(){
    int n;
    int fact =1;
    
    printf("Enter the value of N :");
    scanf("%d",&n);

    for(int i =1; i <= n; i++){
      fact *=i;

    }
    printf("Factorial Of the Number => %d",fact);
}