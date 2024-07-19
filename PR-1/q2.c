#include<stdio.h>

main(){
	int  BS ,HRA ,DA,TA ,hra ,ta,da ,ans;
	
	printf("Enter the Value of BS:-");
	scanf("%d",&BS);
	
	printf("Enter the Value of HRA:-");
	scanf("%d",&HRA);
	
	printf("Enter the Value of DA:-");
	scanf("%d",&DA);
	
	printf("Enter the Value of TA:-");
	scanf("%d",&TA);
	
	hra=(BS*HRA)/100;
    da=(BS*DA)/100;
	ta=(BS*TA)/100;

    ans = BS + hra+ ta+ da;
    
    printf("%d",ans);
}
