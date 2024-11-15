#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 * Return NULL if size = 0
 * 
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c){
    char tableau[] = {};

    for (int i = size; i > 0; i--)
    {
        tableau[i] = c;
    }

    char *tableau[] = tableau;

    if(size == 0){
        return NULL;
    } else {
        return *tableau; 
    }
}
