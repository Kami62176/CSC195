#include <iostream>
#include "MyConfig.h"
#include "MyDerived.h"


using namespace std;

struct Person
{
	char name[32];
	int id;
};

void SquareRef(int& iVal) {
	iVal = iVal * iVal;
}

void Square(int iVal) {
	iVal = iVal * iVal;
}

void Double(int* iVal) {
	*iVal = *iVal * 2;

}

int main()
{

	Config myConf;
	memset(&myConf, '\0', sizeof(myConf));
	myConf.version.Minor = ' ';

	cout << "\n conf size equals: " << sizeof(myConf) << endl;

	cout << sizeof(myConf.version.Major) << endl;

	cout << &myConf.version.Major << endl << &myConf.version.Minor << endl;


	cout << endl << "03_week hello world\n\n" << endl;

	// ** REFERENCE **
	// 
	// declare an int variable and set the value to some number (less than 10)
	// declare a int reference and set it to the int variable above

	int numberX = 7l;
	int& referenceNum = numberX;

	// output the int variable

	cout << "numberX is " << numberX << endl;

	// set the int reference to some number

	referenceNum = 4;

	// output the int variable

	cout << "numberX now is " << numberX << " after reference variable changed." << endl;

	// what happened to the int variable when the reference was changed? (insert answer)

	/**
	* Because the int reference is only pointing to the location in memory of the int variable,
	* changing the reference would be changing the value at the reference location
	* which in this case is number and so number is changed.
	*
	**/


	// output the address of the int variable
	
	cout <<"Address of numberX is: " << &numberX << endl;

	// output the address of the int reference

	cout << "Address of reference numberX is: " << &referenceNum << endl;

	// are the addresses the same or different? (insert answer)

	/*
	*
	* The addresses are the same as the reference points to the same location in memory as the number variable.
	*
	*/
	
	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int parameter
	// in the function, multiply the int parameter by itself and assign it back to the parameter (i = i * i)
	// call the Square function with the int variable created in the REFERENCE section

	Square(referenceNum);
	// output the int variable to the console
	cout << "this is numberX after non-reference parameter squared: " << numberX<< endl;

	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""

	SquareRef(numberX); // this is expecting a reference alias
	cout << "this is numberX after reference parameter squared: " << numberX << "  <--- new value" << endl;


	// ** POINTER VARIABLE **
	// 
	// declare an int pointer, set it to nullptr (it points to nothing)
	// set the int pointer to the address of the int variable created in the REFERENCE section

	int* numberPtr = nullptr;
	numberPtr = &numberX;


	// output the value of the pointer
	

	cout << "This is the value of the pointer pointing to numberX: " << numberPtr << endl;

	// what is this address that the pointer is pointing to? (insert answer)
	
	/*
	* the pointer is pointing to the address of numberX (the first int variable we declared)
	*/

	// output the value of the object the pointer is pointing to (dereference the pointer)

	cout << "This is numberPtr dereferenced: " << *numberPtr << endl;

	// ** POINTER PARAMETER **
	//
	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter (i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	// call the Double function with the pointer created in the POINTER VARIABLE section

	Double(numberPtr); // this is expecting an address.



	// output the dereference pointer

	cout << "Value of doubled pointer dereferenced: " << *numberPtr << endl;

	// output the int variable created in the REFERENCE section
	
	cout << "Value of numberX after pointer doubled: " << numberX << endl;

	// did the int variable's value change when using the pointer?

	/*
		Yes, the int variable that the pointer was pointing to also changed as a result of doubling the pointer.
	*/

	// ** ALLOCATION/DEALLOCATION **
	//
	// create an int pointer that points at an int allocated on the heap, set the allocated int value to some number
	// output the pointer value, this should be the address of the int allocated on the heap
	// output the dereference pointer
	// deallocate the int pointer to free up the memory

	int *heapNumber = new int;
	cout << "heapNumber pointer value: " << heapNumber << endl;

	cout << "dereferenced heapNumber pointer: " << *heapNumber << endl;
	delete(heapNumber);

	// create an int pointer that points at an array of ints allocated on the heap, the array size should be 4-6
	// use a for loop and set each int in the array to a random number (use => rand() % 10 to get a random number
	// use a for loop and output each of the ints in the array
	// use a for loop and output the address of each of the ints in the array
	// deallocate the int pointer to free up the memory block (remember it's an array)

	int numCount = 5;
	int* manyNumbers = new int[numCount];

	for (int index = 0; index < numCount; index++) {
		manyNumbers[index] = rand() % 10;
		cout << manyNumbers[index] << "   ";
	}
	cout << endl << endl;
	for (int index = 0; index < numCount; index++) {
		cout << &manyNumbers[index] << "   ";
	}
	delete(manyNumbers);



	// ** STRUCTURE **
	//
	// create a Person pointer that points at an array of Persons allocated on the heap, the array size should be 2
	// read in a name from the console and set it to the person name, do this for the id also, do this for both Persons
	// use a for loop and output the name and id of each person in the array 
	// deallocate the person pointer to free up the memory block (remember it's an array)




	MyBase base;
	cout << "base(2) " + base.AddSomething(2);
	MyDerived der;

	cout << "\n Der(2)" + der.AddSomething(2);

	int* myIPtr;
	myIPtr = new int; // anything instantiated is on the heap

	void* wild = malloc(10);
	char* chPtr = (char*)malloc(10);
}





