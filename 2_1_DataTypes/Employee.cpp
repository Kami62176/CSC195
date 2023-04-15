#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee() { //constructer
    memset(&name, NULL, sizeof(name));

}

Employee::~Employee() { // destructor
    memset(&name, NULL, sizeof(name));

}


const float Employee::TAX = 0.01f;


void Employee::Read() {
    cout << "\n Enter your name : ";
    cin >> name;
    cout << " Enter days worked: ";
    cin >> daysWorked;
    cout << " Enter your hourly wage: ";
    cin >> wage;

    if (daysWorked > MAX_DAYS)
        daysWorked = MAX_DAYS;


    for (int i = 0; i < daysWorked; i++) {
        cout << " Enter the hours worked for day " << (i + 1) << ":";
        cin >> hoursWorkedPerDay[i];
        grossPay = hoursWorkedPerDay[i] * wage + grossPay;
        //Calc running totals here
    }
    totalTaxes = grossPay * TAX;
    netPay = grossPay - totalTaxes;
}


void Employee::Write() {
    cout << "\n Gross pay is: " << grossPay;
    cout << "\n Total tax is: " << totalTaxes;
    cout << "\n Netpay is: " << netPay;
    cout << "\n Pay to: " << name << endl;

}
