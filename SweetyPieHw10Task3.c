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

/* Function Prototypes */
void Usage(char **info);
void ReadFile(char *fName, unsigned int num[]);
void MPEGVersion(stuff);
void Layer(stuff);
void SamplingRate(stuff);

/* Main Program */
int  main(int argc, char *argv[])
{

	return 0;
}


/* Function Defenitions */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Usage
 *  Description:  
 *    Arguments:
 *       Return:
 * =====================================================================================
 */
void Usage(char **info)
{

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

}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  MPEGVersion
 *  Description:  
 *    Arguments:
 *       Return:
 * =====================================================================================
 */
void MPEGVersion(unsigned int data)
{ 
    unsigned int lay, rest; // lay for the speed and rest well is for the rest

    rest = data & 0x00180000;
    shift rest >> 19;
    switch (rest )
    {
        case 1:	
            printf("your MPEG Version is: MPEG version 2.5 \n");
            break;

        case 2:	
            printf("your MPEG Version is: \n");
            break;

        case 2:	
            printf("your MPEG Version is: \n");
            break;

        default:	
            printf("your MPEG Version is: \n");
            break;

    }
}				/* -----  end switch  ----- */
void Layer(stuff)
{

}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SamplingRate
 *  Description:  
 *    Arguments:
 *       Return:
 * =====================================================================================
 */
void SamplingRate(stuff)
{

}

