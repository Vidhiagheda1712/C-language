#include <stdio.h>



void countVowels(char name[20], int a, int e ,int i, int o, int u) {
 
    a = 0;
    e= 0;
    i = 0;
    o = 0;
    u= 0;
   
    char v[20];
    while (vovel) {
        
        switch (v) {
            case 'a':
             a++;
              break;
            case 'e':
             e++;
            break;
            case 'i': 
            i++; 
            break;
            case 'o': 
            o++;
             break;
            case 'u': 
            u++;
             break;
        }
        name++;
    }
}

int main() {
    char name[20];
    int a,e,i,o,u;

  
    printf("Enter a string: ");
    gets("name");

    
    countVowels(name, a, e, i, o, u);

    
    printf("Number of vowels:\n");
    printf("A: %d\n", a);
    printf("E: %d\n", e);
    printf("I: %d\n", i);
    printf("O: %d\n", o);
    printf("U: %d\n", u);

    
}
