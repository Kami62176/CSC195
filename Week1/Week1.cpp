// Week1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Week_1 Hello World!\n";
    int iVal1 = -1;
    short shVal2 = 0;
    int iVal3 = 42;
    float fVal = 3.14f;
    char chVal = 'a';
    fVal = 34;

    std::cout << "iVal1 = ";
    std::cout << iVal1 << " address = " << &iVal1;
    std::cout << "\n shVal2 = " << shVal2 << " address = " << &shVal2;

    //std::cout << "\n\n" << &iVal3;

    std::cout << "\n\n ****** size of int = " << sizeof(iVal1);
    std::cout << "\n\n ****** size of short = " << sizeof(shVal2);

    int* iPtr = NULL; //Init Ptr var
    iPtr = &iVal1; // sets iPtr to address of variable
    char* chPtr = (char*)iVal1;

    *iPtr = 18; // this changes the value of the variable that iPtr is pointing to
    
    std::cout << "\n Value pointed to by iPtr = " << *iPtr; // Value that iPtr points to
    std::cout << "\n\n iVal1 = ";
    std::cout << iVal1 << " address = " << &iVal1;
    std::cout << "\n Value of iPtr = " << iPtr; //Value inside of var Iptr
    std::cout << "\n address of iPtr is " << &iPtr;

    std::cout << "\n Some value is " << *(iPtr - 12);
    //std::cout << "\n\n Stange stuff = " << *(chPtr - 12);

    //Below is heap stuff

    
    char* cTemp = NULL;
    cTemp = (char*) malloc(20); //20 bytes of heap
    memset(cTemp, -1, 20); // Here we are clearing the memory starting from the location of cTemp in memory moving 20 but it does not need to be 20 it could be any

    free(cTemp);
    //





    std::cout << "\n\n\n ** end of program ** \n\n\n\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
