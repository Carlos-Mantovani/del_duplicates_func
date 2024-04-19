#include <stdio.h>
#include <stdlib.h>
#include "del_duplicates.h"

//function will delete any duplicate number in an array of integers,
//it can be easily changed to work with other data types
unsigned int del_duplicates(int *a, int size) {
    //alocate memory for the array
    int *n = malloc(size * sizeof(*a));
    //iterates through the entire array for each element of the array,
    //if j element is equal i element, shift the values left, then decrement the size variable
    //after remove the duplicates, assign value in a to n on the same index
    for (unsigned int i = 0; i < size; i++) {
        for (unsigned int j = i + 1; j < size; j++) {
            if (*(a + i) == *(a + j)) {
                //printf("Number %d deleted from array\n", *(a + j));
                for (unsigned int k = j; k < size - 1; k++)
                    *(a + k) = *(a + k + 1);            
                size--;
            } 
            *(n + i) = *(a + i);
        } 
    }
    //realloc n to the new size and assign it to the original array
    a = (int*)realloc(n, size * sizeof(*a));
    //return the new size
    return size;
}
