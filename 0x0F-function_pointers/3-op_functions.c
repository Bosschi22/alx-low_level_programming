#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* op_add - entry point
* @a: 1st value
* @b: 2nd value
* Return: a+b
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - entry point
* @a: 1st value
* @b: 2nd value
* Return: result
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - entry point
* @a: 1st value
* @b: 2nd value
* Return: result
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - entry point
* @a: 1st value
* @b: 2nd value
* Return: result
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
* op_mod - entry point
* @a: 1st value
* @b: 2nd value
* Return: result
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
