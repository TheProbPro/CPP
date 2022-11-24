#include <iostream>
#include <iomanip>
#include <array>


int main()
{
    //a) Declare a built-in array of type unsigned int called values with five elements, and
    // initialize the elements to the even integers from 2 to 10. Assume that the constant SIZE
    // has been defined as 5.
    unsigned int values[5]{2, 4, 6, 8, 10};

    //b) Declare a pointer vPtr that points to an object of type unsigned int.
    unsigned int *vPtr;

    //c) Use a for statement to display the elements of built-in array values using array subscript
    // notation.
    for(unsigned int i = 0; i<5; i++){
        std::cout << "values at i = " << values[i] << std::endl;
    }

    //d) Write two separate statements that assign the starting address of built-in array values
    // to pointer variable vPtr.
    vPtr = values;
    vPtr = &values[0];
    std::cout << "vPtr = " << vPtr << std::endl;
    std::cout << "*vPtr = " << *vPtr << std::endl; //dereference *vPtr

    //e) Use a for statement to display the elements of built-in array values using pointer/offset
    // notation.
    for(unsigned int i = 0; i < 5; i++){
        std::cout << "e answer = " << *(vPtr + i) << std::endl;
    }

    //for(unsigned int j = 0; j < 5; j++, vPtr++){
    //    std::cout << "vPtr = " << vPtr << std::endl;    // udskriver memory placering
    //    std::cout << "vPtr = " << *vPtr << std::endl;   // udskriver værdi


    //f) Use a for statement to display the elements of built-in array values using pointer/offset
    // notation with the built-in array’s name as the pointer.
    for(size_t i = 0; i < 5; i++)
        std::cout << "f answer = " << *(values + i) << std::endl;

    //g) Use a for statement to display the elements of built-in array values by subscripting the
    // pointer to the built-in array
    for(unsigned int i = 0; i < 5; i++){
        std::cout << "vptr[i]= " << vPtr[i] << std::endl;
    }

    //h) Refer to the fifth element of values using array subscript notation, pointer/offset notation
    // with the built-in array name’s as the pointer, pointer subscript notation and pointer/
    // offset notation.
    std::cout << "fifth element with array notation = " << values[4] << ", " << *(values+4) << std::endl;
    std::cout << "fifth element with pointer notation = " << vPtr[4] << ", " << *(vPtr+4) << std::endl;

    //i) What address is referenced by vPtr + 3? What value is stored at that location?
    std::cout << "adress of vPtr + 3 = " << vPtr + 3 << std::endl;
    std::cout << "value at vPtr + 3 = " << *(vPtr + 3) << std::endl;

    //j) Assuming that vPtr points to values[ 4 ], what address is referenced by vPtr -= 4?
    // What value is stored at that location?
    vPtr = &values[4];
    std::cout << "address refered to bu vPtr -= 4 = " << (vPtr -= 4) << std::endl;
    std::cout << "values stored at that location = " << *vPtr << std::endl;

    return 0;
}
