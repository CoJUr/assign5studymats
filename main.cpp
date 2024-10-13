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
}