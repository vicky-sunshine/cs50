#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main() {
    float input;
    int price;
    int count=0;
    
    printf("O hai! ");
    do {
        printf("How much change is owed?\n");
        input = get_float();
        price = round(input*100);
        
    } while(price < 0);

    while(price >= 25) {
        price -= 25;
        count++;
    }
    
    while(price >= 10){
        price -= 10;
        count++;
    }
    
    while(price >= 5){
        price -=5;
        count++;
    }
    
    while(price >= 1){
        price -= 1;
        count++;
    }
    
    printf("%i\n", count);
}