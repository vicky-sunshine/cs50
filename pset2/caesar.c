#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[]) {
   
    if(argc == 2) {
        int shift = atoi(argv[1]);
        
        printf("plaintext: ");
        string s = get_string();
        
        if(s != NULL) {
            printf("ciphertext: ");
            
            for(int i=0; i<strlen(s); i++) {
                if(s[i] >='a' && s[i]<='z') {
                    printf("%c", (s[i]-'a'+shift) % 26 +'a');
                } else if (s[i] >='A' && s[i]<='Z') {
                    printf("%c", (s[i]-'A'+shift) % 26 +'A');
                } else {
                    printf("%c", s[i]);
                }
            }
            printf("\n");
        }
    } else {
        printf("Usage: ./caesar k\n");
        return 1;
    }
    return 0;
}