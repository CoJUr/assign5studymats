#include "main.h"

int main() 
{
    // this is a statically declared int
    int i1;

    //this is a pointer to an int aka a memory location. NOT an int, but an address of a POTENTIAL int OR int array. Will be used here to create a dynamically allocated int. the * infront of the variable name means it is a pointer. could also append the * to the type, like int* i2; instead of int *i2; but the latter is more common.
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
    cout << "The address pointed to by i2: " << i2 << endl;
    cout << endl;





    /* using memory addresses allows passing by reference. Can then alter a variable directly in a function
    and don't have to return it, as its altered directly through the address. Especially useful for arrays and large data sets. */

   cout << "The number in i1 before add_100 was.... " << i1 << endl;
   cout << "And now after add_100 is.... ";
    add_100(&i1); // passing the memory location of i1 to the function -- note the & operator
    cout << i1 << endl; //  110 
    cout << endl;

    /* ALWAYS delete dynamically allocated memory when done with it. The memory i2 points to is not automatically deleted when the program ends. This is a memory leak. We don't need it anymore, so delete it.
    i2 still exists, but the memory allocated to it is freed. i2 is still a valid, usable pointer. */
    delete i2;
    i2 = nullptr; // set to nullptr to avoid dangling pointers (location pointing to a deleted memory location)


    // extend this concept to dynamic arrays

    int array1[SIZE]; // statically declared array

    /* Another simple pointer to an int. Will be used to create dynamically allocated array. */
    int *array2;

    // the new array being created at runtime. The memory location of the array is assigned to array2.
    array2 = new int[SIZE];

    /* All arrays automatically pass by reference regardless of how they are declared. The function will alter the array directly. No need to use * or & operators when using array names because they are pointers to begin with. */


    fill_array( array1, SIZE, 10); // fill the array with 10s
    fill_array( array2, SIZE, 20); // fill the array with 20s


    display_array( array1, SIZE); // displays array1
    display_array( array2, SIZE); // displays array2

    // done with the dynamically allocated memory, so delete it.
    delete [] array2;
    array2 = nullptr; // set to nullptr to avoid dangling pointers (location pointing to a deleted memory location)

    return 0;

}