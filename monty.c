#include "monty.h"

/**
* main - entry point of the program
* @argc: argument count
* @argv: array containing command line arguments
* return: 0
*/
int main(int argc, char * argv[])
{
	FILE *fptr;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit (EXIT_FAILURE);
	}
	//printf ("File name is %s\n", argv[1]);
	//printf ("##########################\n");
	
	if ((fptr = fopen(argv[1],"r")) == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit (EXIT_FAILURE);
	}

	file_parser(fptr);
	fclose(fptr);
	
	return (0);
}
