#include<stdio.h>

main(){
	int n, count=0;
	printf("Enter Any Value :-");
	scanf("%d",&n);
	
	while(n != 0){
	   n= n/10;
	   count++;	
	}
	printf("%d",count);
}
