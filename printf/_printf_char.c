#include "main.h"

/**
 * pc - Prints character c
 * @arg: character to print
 * Return: number of characters printed
 * -------------------------------------------------------------
 * Source File: _printf_char.c - program to print character c
 * -------------------------------------------------------------
 * This file contains the program that prints character c
 * -------------------------------------------------------------
 * Authors - Samrawit Bezabih, Girmangus Gebrezgee
 * Project Date - May 13, 2022 - May 18, 2022 
 * -------------------------------------------------------------
 **/
int pc(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);
	return (1);
}
