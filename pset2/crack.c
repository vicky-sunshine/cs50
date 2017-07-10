#define _XOPEN_SOURCE
#include <unistd.h>
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, string argv[]) {
   
    char salt[3];
    char key [5];
    char letters[52];
    
    int count=0;
    for(char letter = 'a'; letter<='z'; letter++){
        letters[count]=letter;
        count++;
    }
    for(char letter = 'A'; letter<='Z'; letter++){
        letters[count]=letter;
        count++;
    }
    
    
    // char key[4];
    if(argc == 2) {
        
        // get salt a
        strncpy(salt, argv[1], 2);
        salt[2] = '\0';

        // one letter
        for(int i=0; i<52; i++) {
            key[0]=letters[i];
            key[1]='\0';
            if(strcmp(argv[1],crypt(key, salt))==0){
                printf("%s\n", key);
                return 0;
            }
        }

        // two letters
        for(int i=0; i<52; i++) {
            key[0]=letters[i];
            for(int k=0; k<52; k++) {
                key[1]=letters[k];
                key[2]='\0';
                if(strcmp(argv[1],crypt(key, salt))==0){
                    printf("%s\n", key);
                    return 0;
                }
            }
        }
     
        // three letters
        for(int i=0; i<52; i++) {
            key[0]=letters[i];
            for(int k=0; k<52; k++) {
                key[1]=letters[k];
                for(int j=0; j<52; j++) {
                    key[2]=letters[j];
                    key[3]='\0';
                    if(strcmp(argv[1],crypt(key, salt))==0){
                        printf("%s\n", key);
                        return 0;
                    }
                }    
            }
        }
        
        for(int i=0; i<52; i++) {
            key[0]=letters[i];
            for(int k=0; k<52; k++) {
                key[1]=letters[k];
                for(int j=0; j<52; j++) {
                    key[2]=letters[j];
                    for(int m=0; m<52; m++) {
                        key[3]=letters[m];
                        key[4]='\0';
                        if(strcmp(argv[1],crypt(key, salt))==0){
                            printf("%s\n", key);
                            return 0;
                        }
                    }
                }    
            }
        }
        
        printf("none\n");
        
        
        
    } else {
        printf("Usage: ./crack hash\n");
        return 1;
    }
    return 0;
}

