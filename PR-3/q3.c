#include<stdio.h>

main(){
	int n ,first,last,sum=0;
	printf("Enter Any Value :-");
	scanf("%d",&n);
	
	last= n % 10;
	
	printf("%d",last);
	
	while(n>=10){
		n=n/10;
	}
	first= n;
	printf("%d",first);
	
	sum = first+last;
	printf("sum of first and last digit is %d",sum);
	
}
