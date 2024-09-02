<<<<<<< HEAD
#include <stdio.h>

 main() {
    char name[20], sname;
    int i, j, len = 0, palindrome = 1;

    
    printf("Enter any string: ");
    gets(name);

   
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == '\n') {
            name[i] = '\0';  
        }
    }
    len = i;

 
    for (i = 0, j = len- 1; i < j; i++, j--) {
        if (name[i] != name[j]) {
            palindrome = 0;
       
        }
    }

  
    if (palindrome) {
        printf("The given string is a Palindrome.\n");
    } else {
        printf("The given string is not a Palindrome.\n");
    }


}
=======
#include <stdio.h>

 main() {
    char name[20], sname;
    int i, j, len = 0, palindrome = 1;

    
    printf("Enter any string: ");
    gets(name);

   
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == '\n') {
            name[i] = '\0';  
        }
    }
    len = i;

 
    for (i = 0, j = len- 1; i < j; i++, j--) {
        if (name[i] != name[j]) {
            palindrome = 0;
       
        }
    }

  
    if (palindrome) {
        printf("The given string is a Palindrome.\n");
    } else {
        printf("The given string is not a Palindrome.\n");
    }


}
>>>>>>> e6b4d43af53a25c3a655be88bcbeee83068ee3bf
