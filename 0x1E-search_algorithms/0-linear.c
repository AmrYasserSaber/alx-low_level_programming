#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value){
    size_t i;
    if (array == NULL){
        return -1;
    }
    if (size == 0){
        return -1;
    }
    for (i = 0; i < size; i++){
        if (array[i] == value){
            printf("Value checked array[%lu] = [%d]\n", i, array[i]);
            return i;
        } else {
            printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        }
    }
    return -1;
}