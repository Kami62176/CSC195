// 2_1_DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employee.h"
using namespace std;
int main()
{
    const unsigned short MAXEMP = 20;
    unsigned short numEmp = 0;
    std::cout << "2_1_DataTypes Hello World!\n";
    Employee workers[MAXEMP];//STACK

    cout << "\n Please enter the number of employees to pay: ";
    cin >> numEmp;

    for (int iCount = 0; iCount < numEmp; iCount++) {
        workers[iCount].Read();
    }
    for (int iCount = 0; iCount < numEmp; iCount++) {
        workers[iCount].Write();
    }








    /*
    Employee* empPtr = new Employee();//HEAP
    const int number = 69;
    cout << "\n Size of number is: " << sizeof(number);

    cout << "\n Size of employee is : " << sizeof(Employee);
    workers[0].age = 42;
    cout << "\n Size of 4 employee array: " << sizeof(workers);
    empPtr = &workers[1]; // this pointer is now pointing at the stack
    //empPtr = new Employee; // here it is pointing at the heap

    empPtr->age = 18;
    void* ptr = malloc(15);

    int* intPtr = new int; //classes are heap maybe
    *intPtr = 42;

    printf("\n hex %00.x", *intPtr);
    printf("\n hex %00.x", *(intPtr + 1));

    delete ptr;
    delete intPtr;

    // !!! i will need this later 
    cout << "\n Size number1 = " << (sizeof(workers) / sizeof(workers[0]));
    cout << "\n size of number2 = " << std::size(workers);
     // */
    



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
