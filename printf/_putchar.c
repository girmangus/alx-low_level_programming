#include "main.h"

/**
 * _putchar - Print the parameter
 * @c: Character
 * Return: Always 0
 * -------------------------------------------------------------
 * Source File: _putchar.c - Print the character
 * -------------------------------------------------------------
 * This file prints only one character
 * -------------------------------------------------------------
 * Authors - Samrawit Bezabih, Girmangus Gebrezgee
 * Project Date - May 13, 2022 - May 18, 2022 
 * -------------------------------------------------------------
 **/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

