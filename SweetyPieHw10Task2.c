/*
 * =====================================================================================
 *
 *       Filename:  SweetyPieHw10Task2.c
 *       	Usage:  ./SweetyPieHw10Task2.c
 *    Description:  Task 2
 *
 *        Version:  1.0
 *        Created:  04/11/2017 04:19:35 PM
 *
 Compiler:  gcc -Wall -Werror -lm 
 *         Author:  Daniel Tayler (), danieltayler@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <string.h>

#define SIZE 40

struct tsunami
{
	int mo, da, yr, fatalities;
	double max_height;
	char location[20];
};

/* Function Prototypes */
void Usage(char **info);

/* Main Program */
int  main(int argc, char *argv[])
{
	char data[SIZE];
	char str[7] = "--help";

	if(argc != 2 || (strcmp(argv[1], str) == 0))
	{
		Usage(&argv[0]);
	}

	strcpy(data, argv[1]);
	FILE *inFile;
	inFile = fopen(data, "r");

	if(inFile != NULL)
	{
		printf("\nTotally read the file\n");
	}
	else
	{
		printf("\nTxt file <%s> could not be read", data);
		Usage(&argv[0]);
		exit(1);
	}

	return 0;
}


/* Function Defenitions */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Usage
 *  Description:  Called if parameter is !=1 or --help
 *    Arguments:  Array of Strings
 *      Returns:  Nothing
 * =====================================================================================
 */
void Usage(char **info)
{
	printf("\nUsage: %s <waves.txt>\n\n", *info);
	exit(1);

	return;
}
