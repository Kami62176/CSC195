// Testing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


int main()
{	
	int* number = new int[10];
	number[0] = 12;

	cout << sizeof(number) << endl<< sizeof(number[8]);

	/*/
	std::cout << "Hello World!\n\n\n";
	char name[33];
	name[10] = '0'; name[11] = '1';
	char* cPtr = name;

	//cout << name << endl << endl<<endl<<&name << endl << sizeof(name);
	//cout << endl << sizeof(name) / sizeof(name[0]) << endl;
	string sName = "another one";

	string sArray[20];
	sArray[0] = "0 index";

	sArray[1] = "hows it going"; sArray[2] = "No way";
	cout << endl << (sArray[1]) << endl << endl << sArray;

	cout << sArray[0].append( sArray[1]);

	memset(name, 0, 12);

	//getline(cin, sName, '\n');
	//cin >> sName;
	cout << "\n\n" << name << "\n\n\n\n";
	cout << sName;
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
