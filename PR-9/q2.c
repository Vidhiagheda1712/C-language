#include<stdio.h>

struct Student{
   int rollno;
   char name[20];
   int Chemistry;
   int Mathematics;
   int Physics;

};


void main(){


   

   struct Student s[5];
   int i;

   printf("Details of students :\n\n");
     
     for(i = 0; i < 5; i++){
       printf("Enter Details Of Student[%d]\n",i+1);
       printf("Enter Roll no :");
       scanf("%d",&s[i].rollno);
      
       printf("Enter Name :");
       scanf("%s",&s[i].name);
       printf("Chemistry Marks:");
       scanf("%d",&s[i].Chemistry);
       printf("Mathematics Marks :");
       scanf("%d",&s[i].Mathematics);
       printf("Physics Marks:");
       scanf("%d",&s[i].Physics);
       printf("\n");
   }
 


     for(i = 0; i < 5; i++){
              printf("\n");

       int sum = s[i].Chemistry + s[i].Mathematics+ s[i].Physics;


       float per = sum/3;

     

         printf("%s (%d)\n",s[i].name,s[i].rollno);
         
         printf("Chemistry => %d\n",s[i].Chemistry);
         printf("Mathematics => %d\n",s[i].Mathematics);
         printf("Physics => %d\n",s[i].Physics);

         printf("Total => %d\n",sum);
         

        printf("Percent => %.2f\n",per);
    

    
     }

}
