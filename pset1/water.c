#include <cs50.h>
#include <stdio.h>

int main(void){
    int minute;
    
    
    printf("Minutes: ");
    minute = get_int();
    printf("Bottles: %i", minute*12);
    
}