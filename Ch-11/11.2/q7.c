#include<stdio.h>


main(){
	
	int i,j;
	
	for(i=1; i<=5; i++){
	
		for(j=i; j>=1; j--){
			printf("%c ",j+64);
		    
		
		}
		printf("\n");
	}
}
