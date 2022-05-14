#include "main.h"

/**
 * ps - Print array of characters
 * @arg: arguments
 * Return: Number of the length of every element of the array
 * -------------------------------------------------------------
 * Source File: _printf_str.c - program to print string chars
 * -------------------------------------------------------------
 * This file contains the program to print string characters
 * -------------------------------------------------------------
 * Authors - Samrawit Bezabih, Girmangus Gebrezgee
 * Project Date - May 13, 2022 - May 18, 2022 
 * -------------------------------------------------------------
 **/

int ps(va_list arg)
{
	int con = 0;
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
		str = "(null)";

	while (str[con] != '\0')
	{
		_putchar(str[con]);
		con++;
	}
	return (con);
}
