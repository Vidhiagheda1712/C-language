#include <stdio.h>

struct Movie{
   
    
    int show_time;
    char movie_name[50];
    int screen_no;
    int ticket_no;
    int ticket_price;

};

main(){
    int n;
    printf("Enter Number Of Movie :");
    scanf("%d",&n);
    struct Movie m[n];

    


    for(int i =0; i < n; i++){
       fflush(stdin);
        printf("Enter Movie Name[%d] :",i+1);
         gets(m[i].movie_name);

       
         printf("Enter Show Time [%d] :",i+1);
        scanf("%d",&m[i].show_time);
        printf("Enter Screen Number[%d] :",i+1);
        scanf("%d",&m[i].screen_no);
        printf("Enter Ticket Number[%d] :",i+1);
        scanf("%d",&m[i].ticket_no);
        printf("Enter  Ticket Price [%d] :",i+1);
        scanf("%d",&m[i].ticket_price);
        printf("\n\n");

    }


    for(int i =0; i < = n; i++){
        printf("Movie Name => %s\n",m[i].movie_name);
       
         printf("Show Time => %d\n",m[i].show_time);
          printf("Screen Number => %d\n",m[i].screen_no);
           printf( "Ticket Number=> %d\n",m[i].ticket_no);
        printf(" Ticket Price  => %d\n",m[i].ticket_price);
        printf("\n\n");
    }


}