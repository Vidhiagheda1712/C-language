#include <stdio.h>

main() {
	
	int score;

    
    printf("Enter your score : ");
    scanf("%d", &score);

    if (score>=80) {
        printf(" your grade is A... Excellent work! You are eligible for the next level.\n");
    }
	  else if (score>=70) {
        printf("your grade is B...Congratulations! You are eligible for the next level.\n");
    } 
	else if (score>=60) {
        printf("your grade is C...Congratulations! You are eligible for the next level.\n");
    }
	else if (score>=60) {
        printf("your grade is D...Congratulations! You are eligible for the next level.\n");
    }  
    	else if (score<=59) {
        printf("your grade is F...Please try again next time\n");
    } 
	else {
        printf("Invalid grade entered.\n");
    }
}

