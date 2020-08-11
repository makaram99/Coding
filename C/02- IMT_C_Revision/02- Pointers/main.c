/* **************************************************************** */
/* Author       : Mahmoud Karam                                     */
/* Date         : 11/08/2020                                        */
/* Version      : V1                                                */
/*  Description : Implementation of concepts discussed at pointers  */
/*                revision by IMT School done for ARM diploma       */
/* **************************************************************** */

#include <stdio.h>
// Null in typeless and points to address 0 (It's defined Automatically)
//#define NULL (void *)0

/* **************************************************************** */
/* Function Name    : func                                          */
/* Parameters       : ptr   ==> pointer to array                    */
/* Description      : Take the address of an array in a pointer and */
/*                    print the elements of this array by the ptr.  */
/* **************************************************************** */
void func (int *ptr);

/* **************************************************************** */
/*                          Main program driver                     */
/* **************************************************************** */
int main()
{
    /****************************************************************/
    /**                     Pointers basics                         */
    /****************************************************************/
    printf ("\t\t\t\t Pointers Basics \n");

    int x = 10;                         // Definition and declaration of x.
    int *ptr;                           // Definition of ptr pointer (reserve address in memory).
    ptr = &x;                           // Declaration of ptr (giving it a value).

    *ptr = 50;                          // * ==> Dereference operator Assign 50 to the address in pointer
                                        // which is x address (x = 50).
    printf ("x   = %d \n", x);             // print value of x (50)

    // %p is used to print an address (Tells the compiler that it's printing an address
    // So. Left zeros nibbles in hexa are printed
    printf ("&x  = %p \n", &x);         // print address of x
    printf ("ptr = %p \n", ptr);        // print value of ptr (address of x)
    printf ("*ptr= %d \n", *ptr);       // print value stored in the address in pointer (x)
    printf ("&ptr= %p \n", &ptr);       // print address of pointer

    printf("\n");               //New Line for isolation in command line
    /****************************************************************/


    /****************************************************************/
    /**                     Passing Arrays                          */
    /****************************************************************/
    printf ("\t\t\t\t Passing Arrays \n");

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    func(arr);                          //Call func and passing address of 1st element in arr[]

    printf("\n");               //New Line for isolation in command line
    /****************************************************************/


    /****************************************************************/
    /**                     Wild Pointer                            */
    /****************************************************************/
    printf ("\t\t\t\t Wild pointers \n");

    // Defining a pointer without referencing it to an address
    // should be initialized with NULL
    int *ptr1 = NULL;
    /**                                 Runtime error, Ask?                 Ask? *****************/
    //printf("ptr1 (Null) = %d \n", *ptr1);   // Print nothing ==>NULL

    printf("\n");               //New Line for isolation in command line
    /****************************************************************/


    /****************************************************************/
    /**                         Casting Pointers                    */
    /****************************************************************/
    printf ("\t\t\t\t Casting pointers \n");

    int y = 100;
    char z = 200;
    int *ptr2 = &y;
    char *ptr3= &z;
    ptr2 = (int *)ptr3;
    /**                                 Runtime Error, Ask?                 Ask? ******************/
    //printf("ptr2 = %d \n", *ptr2);

    printf("\n");               //New Line for isolation in command line
    /****************************************************************/


    /****************************************************************/
    /**                 Big and Little Endianess                    */
    /****************************************************************/
    printf ("\t\t\t\t Big and Little Endianess \n");

    int m = 32000;              // (0000 0000) (0000 0000) (0111 1101) (0000 0000) = 0x(00)(00)(7d)(00)
                                // We use int cuz it's 4 bytes
    char *ptr4;                 // We use char to make the increment step = 1 byte
    ptr4 = &m;
    printf("Address of m        = %p \n", &m);
    printf("Address inside ptr4 = %p \n\n", ptr4);

    int j = sizeof (int);       // int is compiler and machine dependant

    char logic = 1;             // To check for (0111 1101)loop
    for (char i = 0; i<j; i++)  // Check for little or big endian
    {
        arr[i] = *ptr4;
        printf("Prt4 = %d \n", *ptr4);                  //print value of *ptr4
        printf("Address inside ptr4 = %p \n", ptr4);    //print Address inside ptr4 (Address of m)
        if ((i==1)&& *(ptr4)!=125)                      //125 in decimal = 0x7d = ob(0111 1101)
            logic = 0;
        printf("byte %d = %x \n", i, *(ptr4 ++));
    }
    if (logic == 1)
        printf("Little Endianess \n");     // Best case
    else
        printf("Big Endianess \n");        // Worst Case

    // It's Little Endian cuz prints LSB at least address

    printf("\n");               //New Line for isolation in command line
    /****************************************************************/

    printf("End of Program %c \n\n", '#');
    return 0;
}

void func (int *ptr)
{
    // ptr[i] = arr[i] cuz they both are addresses
    // *(ptr + i) can be used. i is a steps added to the ptr address.
    for (int i = 0; i< 10 ; i++)
        printf ("Arr[%d] = %d \n",i,ptr[i]);
}
