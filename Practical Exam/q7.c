#include <stdio.h>


int main(){
     FILE *fp;

     fp =fopen("capitalize.txt","w");

     char name[20];

     printf("Enter Any Name :");
     gets(name);
      if(fp != '\0'){
          fprintf(fp,"Capital format Sentence :\n\n");
          for(int i=0; name[i]!='\0'; i++)
          if(i =='a' && i =='z'){
            i-=32;
            fprintf(fp,"%c",name[i]);
            
          }
      }
      else{

        printf("File is not working Successfully.....!");
      }

}
