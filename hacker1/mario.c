#include <cs50.h>
#include <stdio.h>

int main() {
    int i, j, k;
    do {
        printf("Height: ");
        i = get_int();
    } while (i <  0 || i > 23);
    
    for (j=i-1; j>=0; j--){
        for (k=0; k<j; k++) {
            printf(" ");
        }
        for (k=0; k<i-j; k++) {
            printf("#");
        }
        printf("  ");
        for (k=0; k<i-j; k++) {
            printf("#");
        }
        printf("\n");
    }
    
}