<<<<<<< HEAD
#include "main.h"
#include <stdlib.h>
/**
 *This program - prints the number of argument
 *@param argc this counts the number of arguments
 *@param argv this allocates the storage for the said arguments.
 *@return int
=======
#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
>>>>>>> bfe7a0c0b435ea51bcc159e30ee1d3e214b164cb
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
<<<<<<< HEAD
	printf("%d\n", argc);
=======
	printf("%d\n", argc - 1);

>>>>>>> bfe7a0c0b435ea51bcc159e30ee1d3e214b164cb
	return (0);
}

