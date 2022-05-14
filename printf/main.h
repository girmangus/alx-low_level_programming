#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * struct cformat - Short description
 * @print: argument to print
 * @p: Pointer
 *
 * Description: Basic structure of format
 * -------------------------------------------------------------
 * Source File: main.h - header file
 * -------------------------------------------------------------
 * This file contains the prototypes, structures and libraries
 * -------------------------------------------------------------
 * Authors - Samrawit Bezabih, Girmangus Gebrezgee
 * Project Date - May 13, 2022 - May 18, 2022 
 * -------------------------------------------------------------
 */

typedef struct cformat
{
char *print;
int (*p)();
} cf_t;

int _printf(const char *format, ...);
int _putchar(char c);
int pc(va_list arg);
int ps(va_list arg);
int pd(va_list arg);
int pi(va_list arg);

#endif
