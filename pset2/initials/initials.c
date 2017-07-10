#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    int check = 0;
    string s = get_string();
    
    if(s != NULL) {
        for(int i=0; i<strlen(s); i++) {
            if(check == 0 && s[i] != ' ') {
                printf("%c", toupper(s[i]));
                check=1;
            }else if(s[i]==' '){
                check=0;
            }
        }
    }
    
    printf("\n");
}