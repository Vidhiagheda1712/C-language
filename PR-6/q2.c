#include <stdio.h>

main() {
    char name[20];
    int freq[256] = {0};
    int i;

   
    printf("Enter any string: ");
    gets(name);

   
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] != '\n') { 
            freq[name[i]]++;
        }
    }
  printf("Frequency of each letter:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c => %d\n", i, freq[i]);
        }
    }

    
}
