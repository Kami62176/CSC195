// 1_3 Payroll.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    const unsigned short MAX_DAYS = 7;
    const float TAX_RATE = 0.1f;

    cout << "1_3_Payroll Hello World!\n";

    string name;
    unsigned short daysWorked = 0; //get from user
    unsigned short hours[MAX_DAYS]; // get from user
    float grossPay = 0; //Pay before taxes ** Calculate
    float wage = 0; //hourly pay rate ** get from user
    float netPay = 0; // Gross pay minus total taxes
    float totalTaxes = 0; // Gross  pay times tax rate

    cout << "\n Enter your name : ";
    cin >> name;
    cout << "\n Enter days worked: ";
    cin >> daysWorked;
    cout << "\n Enter your hourly wage: ";
    cin >> wage;

    if (daysWorked > MAX_DAYS)
        daysWorked = MAX_DAYS;


    for (int i = 0; i < daysWorked; i++) {
        cout << "\n Enter the hours worked for day " << (i + 1) << ":";
        cin >> hours[i]; 
        grossPay = hours[i] * wage + grossPay;
        //Calc running totals here
    }
    totalTaxes = grossPay * TAX_RATE;
    netPay = grossPay - totalTaxes;

    cout << "\n Gross pay is: " << grossPay;
    cout << "\n Total tax is: " << totalTaxes;
    cout << "\n Netpay is: " << netPay;
    cout << "\n Pay to: " << name;
    cout << "\n\n\n---END---\n\n\n";
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
