/* ************************************************************ */
/* Author       : Mahmoud Karam                                 */
/* Date         : 09/08/2020                                    */
/* Version      : V2                                            */
/* Description  : binary search Algorithm has Big(o) log2(n)    */
/* ************************************************************ */

#include <iostream>
using namespace std;

/* ************************************************************ */
/* Function Name : binarySearch                                 */
/* Parameters    : arr[], L, R, x ==> Type: int                 */
/* Description   : Take the array of numbers to search about one*/
/*                 of them (x). L and R are the border of array */
/*                 to search within.                            */
/*                 * The program search about x at the middle   */
/*                 index. if it's not eauivalent, it checks if  */
/*                 that number is bigger or smaller than x, then*/
/*                 search at the left or right subarray with the*/
/*                 modified value of L or R depending on at     */
/*                 which array it will search.                  */
/*                 * if the number is found, the program return */
/*                 the index. else, it returns -1               */
/* ************************************************************ */
int binarySearch(signed short int arr[], unsigned char L, unsigned char R, signed short int x);

/* ******************************************************************** */
/*                     Main Program Driver                              */
/* ******************************************************************** */
int main()
{
    /* Array of numbers definition and declaration where the    */
    /* program will search about a specific number              */
	signed short int arr[] = { 1, 3, 4, 15, 20, 35 };

	/* Declaration and definition of the wanted number          */
	signed short int x = 15;

	/* ******************************************************** */
	/* Find the size of array because int size is architecture  */
	/* and compiler dependant. so, to remove confusion, this    */
	/* an easy approach to find size of array of int type       */
	/* ******************************************************** */
	int size_of_array = sizeof(arr) / sizeof(arr[0]);

	/* Find the index of x in the array. At the first call,     */
	/* L = 0, R = size_of_array -1                              */
	unsigned char index = binarySearch(arr, 0, size_of_array - 1, x);

	/* ******************************************************** */
	/*                      Testing the index                   */
	/* ******************************************************** */

	/* The most probable case is to find the #, so in 1st if    */
    if (index != -1)
        /* Explicit casting of unsigned char index to unsigned  */
        /* short int.                                           */
        cout << "The index is: " << (unsigned short int)index;
    /* The least probable case is not to find it, so in else    */
    else
        cout << "Element is not present in array \n";

	return 0;
}   // end of main function

int binarySearch(signed short int arr[], unsigned char L, unsigned char R, signed short int x)
{
    /* if R >= L, it continue search                            */
	if (R >= L)
        {
        /* Find the middle index of  array by it's borders      */
		char mid = L + (R - L) / 2;

		/* Search at the middle                                 */
		if (arr[mid] == x)
			return mid;
		/* Search in the left subarray                          */
		if (arr[mid] > x)
			return binarySearch(arr, L, mid - 1, x);
		/* Search in the right subarray                         */
		return binarySearch(arr, mid + 1, R, x);
        }
	/* The element is not found                                 */
	return -1;
}   // end of binarySearch function
