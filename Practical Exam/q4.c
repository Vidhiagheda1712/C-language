#include <stdio.h>


int LeapYear(int year) {
    if (year % 4 == 0) {
      return 1; 
    } 
    else {
        return 0; 
    }
}


int main() {
    int start, end;

    
    printf("Enter the first number: ");
    scanf("%d", &start);
    printf("Enter the second number: ");
    scanf("%d", &end);

    printf("Leap years between %d and %d are:\n", start, end);

    int year = start;

    while (year <= end) {
        if (LeapYear(year)) {
            printf("%d ",year);
        }
        year++;
    }

    printf("\n");

   
}
