#pragma once
class Employee
{

public:
	char name[32];
	int age = 0;
	int daysWorked;
	float hoursWorkedPerDay[7];
	float wage = 0;
	static const float TAX;
	const int MAX_DAYS = 7;
	float grossPay = 0;
	float totalTaxes = 0;
	float netPay = 0;


protected:

private:

	//put methods in the middle
public:
	Employee();
	void Read();
	void Write();







};

