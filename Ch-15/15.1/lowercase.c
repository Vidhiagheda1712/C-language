#include<stdio.h>

main(){

   char name[20];

   printf("Enter Your Name :");
   scanf("%[^\n]",&name);


   for (int i = 0; name[i]!= '\0'; i++)
   {
        if(name[i] >='A' && name[i] <='Z'){
         
          name[i]+=32;
        }
   }
       printf("name \t: %s",name);
      
}