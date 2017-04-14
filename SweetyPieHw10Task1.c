/*
 * =====================================================================================
 *
 *       Filename:  housePrice.c
 *       	Usage:  ./housePrice.c
 *    Description:  Ask user to specify the address and price
 *    				of two house that are on sale
 *    				It prints out which of the two houses is cheaper
 *
 *        Version:  1.0
 *        Created:  03/06/2014 04:03:12 PM
 *       Compiler:  gcc
 *         Author:  Dr. Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "SweetyPieHw10Task1.h" // Rename this to your name name_hw#_task#.h
/* Function Prototypes */

/* Main Program */
int main(int argc, char* argv[])
{
	printf("Enter info for first house\n");
	struct house firstHouse = InputHouse();
	printf("\nEnter info for second house\n");
	struct house secondHouse = InputHouse();

	PrintHouse("first house:", firstHouse);  
	printf("\n\n");
	PrintHouse("second house", secondHouse);
	printf("\n\n");

	int comparison = ComparePrices(firstHouse, secondHouse);
	switch(comparison)
	{
		case -1:
			printf("the first house is cheaper\n");
			break;

		case 0:
			printf("the two houses are equally expensive\n");
			break;

		case 1:
			printf("the second house is cheaper\n");
			break;

		default:
			printf("invalid comparison value %d, there must be a bug\n", comparison);
			break;
	}

	return 0;
}


/* Function Defenitions */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  InputHouse
 *  Description:  Function for Input House
 *    Arguments:  Nothing
 *      Returns:  Structure house
 * =====================================================================================
 */
struct house InputHouse(void)
{
	struct house InputH;
	printf("Please enter the street #: ");
	scanf("%d", &InputH.strNum);
	printf("Please enter the street Name: ");
	scanf("%s", &InputH.strNam[LEN]);
	printf("Please enter the Price: ");
	scanf("%f", &InputH.price);

	return InputH;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintHouse
 *  Description:  Function to PrintHouse info
 *    Arguments:  Pointer to a char & structure house
 *      Returns:  Nothing
 * =====================================================================================
 */
void PrintHouse(char *name, struct house h)
{
	char str[LEN];
	strcpy(str, name);
	//Can't get %s to display the entire string of the street name, but it works perfectly in the function above when you printf the name from the address?  hmmmmmm
	printf("\n%s at %d %s for $%.2f", str, h.strNum, h.strNam, h.price);

	return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ComparePrices
 *  Description:  Function to Compare Prices
 *    Arguments:  Structure house, structure house
 *      Returns:  Integer
 * =====================================================================================
 */
int ComparePrices(struct house h, struct house j)
{
	int CompP;
	if(h.price < j.price)
	{
		CompP = -1;
	}
	else if(h.price == j.price)
	{
		CompP = 0;
	}
	else
	{
		CompP = 1;
	}

	return CompP;
}


