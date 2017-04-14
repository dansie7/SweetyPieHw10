/*
 * =====================================================================================
 *
 *       Filename:  SweetyPieHw10Task1.h
 *
 *    Description:  Header File for Task 1
 *
 *        Version:  1.0
 *        Created:  04/13/2017 02:40:58 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sharon Dansie (), sharondansie@weber.edu
 *   Organization:  
 *
 * =====================================================================================
 */
#define LEN 20

struct house
{
	int strNum;
	char strNam[LEN];
	float price;
};

/* Function Prototypes */
struct house InputHouse(void);
void PrintHouse(char *name, struct house h);
int ComparePrices(struct house h, struct house j);
