#include <stdio.h>


int main(){
     FILE *fp;

     fp =fopen("capitalize.txt","w");



      if(fp != '\0'){
          fprintf(fp,"Capital format Sentence :\n\n");

         fprintf(fp,"hello world\n");
          if(fp =="A" && fp =="Z"){
             fp+=32;
            fprintf(fp,"hello world")
          }
      }
      else{

        printf("File is not working Successfully.....!");
      }

}