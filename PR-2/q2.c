#include <stdio.h>

main(){
	char grade;
	int score ;
	printf("Enter Your Score :");
	scanf("%d",&score);
          (score >= 90)
	            ? grade ='A' 
				:
           (score >= 80) 
		       ?  grade ='B' 
			   :
           (score >= 70) 
		       ?  grade ='C' 
			   :
           (score >= 50) 
		        ?  grade ='D' 
				:
			(score >= 33 && score <= 50) 
		        ?  grade ='F' 
				: printf("");
				
				
     switch(grade) {
        case 'A':
            printf("Your grade is A.Excellent work!\n");
            break;
        case 'B':
            printf("Your grade is B.Well done.\n");
            break;
        case 'C':
            printf("Your grade is C.Good job.\n");
            break;
        case 'D':
            printf("Your grade is D.You passed, but you could do better.\n");
            break;
        case 'F':
            printf("Your grade is F.Sorry, you are failed.\n");
            break;
       
        default:
            printf("Invalid grade.\n");
    }

}
