#include<stdio.h>
main(){
int score;

printf("Enter the value of Score:");
scanf("%d",&score);

  (score >= 91 && score<=100)
    ?printf("Your grade is A")
    :
   (score >= 81 && score<=90)
    ?printf("Your grade is B")
    :
    (score >= 71 && score<=80)
    ?printf("Your grade is C")
    : 
    (score >= 61 && score<=70)
    ? printf("Your grade is D")
    : 
    (score >= 51 && score<=60)
    ?printf("Your grade is E")
    :
    (score >= 41 && score<=50)
    ?printf("Your grade is F")
    :
   	 (score >= 33 && score<=40)
    ?printf("sorry,you are failed")
    :printf("");
    
   
}

