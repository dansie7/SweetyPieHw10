/*
 * =====================================================================================
 *
 *       Filename:  SweetyPieHw10Task3.c
 *       	Usage:  ./SweetyPieHw10Task3.c
 *    Description:  Task 3
 *
 *        Version:  1.0
 *        Created:  04/11/2017 04:18:16 PM
 *
 Compiler:  gcc -Wall -Werror -lm 
 *         Author:  Daniel Tayler (), danieltayler@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <string.h>

#define FSIZE 21
/* Function Prototypes */
void Usage(char **info);
void ReadFile(char *fName, unsigned int num[]);
void MPEGVersion(arry);

/* Main Program */
int  main(int argc, char *argv[])
{
    char inF[FSIZE];
    unsigned int array[FSIZE];
	char str[7] = "--help";

	if(argc != 2 || (strcmp(argv[1], str) == 0))
	{
		Usage(&argv[0]);
	}
    strcpy(inF, argv[1]);
    ReadFile(inF, array);
    MPEGVersion( array);
	return 0;
}


/* Function Defenitions */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Usage
 *  Description:  Called if parameter is !=1 or --help
 *    Arguments:  Array of Strings
 *       Return:  Nothing
 * =====================================================================================
 */
void Usage(char **info)
{
	printf("\nUsage %s <inputFile>\n\n", *info);
	exit (1);

	return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ReadFile
 *  Description:  
 *    Arguments:
 *       Return:
 * =====================================================================================
 */

void ReadFile(char *fName, unsigned int num[])
{
    FILE *inFile;
    inFile = fopen(fName, "r");
    while(getchar() != EOF)
    {

    }
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  MPEGVersion
 *  Description:  
 *    Arguments:
 *       Return:
 * =====================================================================================
 */

void MPEGVersion(unsigned int data )
{ 
    unsigned int lay, rest; // lay for the speed and rest well is for the rest

    // this is for find the mpeg field
    rest = data & 0x00180000;
    // sifting the rest to make things easier
     rest >> 19;
     lay = rest;
    switch (rest )
    {
        case 1:	
            printf("your MPEG Version is: MPEG version 2.5 \n");
            break;

        case 2:	
            printf("your MPEG Version is: reserved \n");
            break;

        case 3:	
            printf("your MPEG Version is: MPEG Version 2 \n");
            break;

        default:	
            printf("your MPEG Version is: MPEG Version 1 \n");
            break;
    // now to get other infromations
    // this is for the layer
    rest = data & 0x00060000;
    // sifting the rest to make things easier
     rest >> 19;
    switch (rest )
    {
        case 1:	
            printf("your Layer is: reserved  \n");
            break;

        case 2:	
            printf("your Layer is: Layer three \n");
            break;

        case 3:	
            printf("your Layer is: Layer 2  \n");
            break;

        default:	
            printf("your Layer is:  Layer 1 \n");
            break;


    rest = data & 0x00000c00;
    rest >> 7;
    if (lay ==  3 ) // mpeg1)
    {
    switch (rest )
    {
        case 1:
            printf("your sampling rate is: 44100 Hz\n");
            break;

        case 2:
            printf("your sampling rate is: 48000 Hz\n");
            break;

        case 3:
            printf("your sampling rate is: 32000 Hz\n");
            break;

        default:
            printf("your sampling rate is: reserv. \n");
            break;


    }
    else if (lay  == 2)  // mpeg2)
    {
    switch (rest )
    {
        case 1:
            printf("your sampling rate is: 22050 Hz\n");
            break;

        case 2:
            printf("your sampling rate is: 24000 Hz\n");
            break;

        case 3:
            printf("your sampling rate is: 16000 Hz\n");
            break;

        default:
            printf("your sampling rate is: reserv \n");
            break;


    }
    else if (lay ==  0 )// mpeg2.5)
    {
    switch (rest )
    {
        case 1:	
            printf("your sampling rate is: 11025\n");
            break;

        case 2:	
            printf("your sampling rate is: 12000\n");
            break;

        case 3:	
            printf("your sampling rate is: 8000\n");
            break;

        default:	
            printf("your sampling rate is: reserv. \n");
            break;


    }

    }
}				/* -----  end switch  ----- */
