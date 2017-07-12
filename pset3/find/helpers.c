/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>
#include <stdio.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    int start = 0;
    int end = n-1;

    while(end >= start){
        int mid = (end+start)/2;

        if (value == values[mid]) {
            return true;
        } else if (value < values[mid]){
            end = mid-1;
        } else if (value > values[mid]){
            start = mid+1;
        } 
    }
    return false;

}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm
    int tmp;
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n;j++) {
            if(values[i]>values[j] ) {
                tmp = values[i]; 
                values[i] = values[j];
                values[j] = tmp;
            }
        }  
    }
    return;
}
