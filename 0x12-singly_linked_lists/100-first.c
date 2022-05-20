#include <stdio.h>
#include "lists.h"

/**
 * firstfunc - prints before the main function is executed.
 *
 * Return: Always 0.
 */
void firstfunc(void) __attribute__((constructor));

void firstfunc(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}