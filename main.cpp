#include "main.h"

int main() 
{
    // this is a statically declared int
    int i1;

    //this is a pointer to an int aka a memory location. NOT and int, but an address of a POTENTIAL int OR int array. Will be used here to create a dynamically allocated int. the * infront of the variable name means it is a pointer.
    int *i2;

    // creating an actual int and assigning the memory location to i2 at runtime. This is a dynamically allocated int.
    i2 = new int;

    /* i1 and i2 can both be used as ints, but i1 is an int directly whereas i2 is a memory location pointing
    to an int. the int at i2 has no name, it only has a memory location. Yet, can still use it as a normal int.
    */

   // this will assign the number 10 to i1
   i1 = 10;

   // assigning the number 20 to the int at the memory location i2
   *i2 = 20;

    /* Print them out to see the difference. Note that i2 will print out the memory location of the int, not the int itself. the * infront of i2 is a dereference operator, which means access the location the pointer is pointing to.
    */
   cout << "The # in i1: " << i1 << endl;
   cout << "The # in the location  i2 is pointing to: " << *i2 << endl;
   cout << endl; // just to make it look nice

    /* Can also access the memory location of i1 by using the & operator. This is the address of operator. It will return the memory location of the variable. i2 is already a memory location, so no need to use the & operator on it, can use it as-is.
    */
    cout << "The memory location of i1: " << long(&i1) << endl;





    /* using memory addresses allows passing by reference. Can then alter a variable directly in a function
    and don't have to return it, as its altered directly through the address. Especially useful for arrays and large data sets.
    */
   cout << "The number in i1 before add_100 was.... " << i1 << endl;



}