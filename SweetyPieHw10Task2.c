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

	struct tsunami stats;
	struct tsunami *ptr;
    struct tsunami wave;
	ptr = &stats;
	int count = 0;
	float average, avgWave, maxWave;
	float max = 0;

	if(inFile != NULL)
	{
		printf("\nFile successfully read\n");

		while(fscanf(inFile, "%d %d %d %d %lf %s", &stats.mo, &stats.da, &stats.yr, &stats.fatalities, &stats.max_height, stats.location) != EOF)
		{
			//printf("%d %d %d %d %.2lf %s\n", stats.mo, stats.da, stats.yr, stats.fatalities, stats.max_height, stats.location);

			average += stats.max_height;
			count++;

			if(ptr->max_height > max)
			{
				max = ptr->max_height;
			}
		}

		//Avg Max Wave Height(ft)
		//3.28083 ft/meter
		avgWave = (average/(count)) * 3.28083;

		//Max Wave Height(ft)
		maxWave = max * 3.28084;

		printf("\nTsunami Summary Data\n");
		printf("Maximum Wave Height: %.2f ft\n", maxWave);
		printf("Average Wave Height: %.2f ft\n\n", avgWave);
		printf("Tsunamis with greater than average heights:\n");
        
		fclose(inFile);
	    inFile = fopen(data, "r");
        avgWave = (average/count);

		while(fscanf(inFile, "%d %d %d %d %lf %s", &wave.mo, &wave.da, &wave.yr, &wave.fatalities, &wave.max_height, wave.location) != EOF)
		{
			if(wave.max_height > avgWave)
			{
				printf("%s\n" , wave.location);
			}
			
		}

		fclose(inFile);
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
