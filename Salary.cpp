#include<iostream>
#include"Employee.h"
#include "Salary.h"
using namespace std;
Salary::Salary()
{
	basicPay = 0.0;
	netPay = 0.0;
	humanResAllowance = 0.0;
	dearnessAllowance = 0.0;
	profitablilityFund = 0.0;
}
Salary::Salary(double bp,double np, double hra, double da, double pfund)
{
	basicPay = bp;
	netPay = np;
	humanResAllowance = hra;
	dearnessAllowance = da;
	profitablilityFund = pfund;
}
void Salary::getEmployeeDetails()
{
	cout << "Enter the basic pay of the employee\n";
	cin >> basicPay;
	cout << "Enter the net pay of the employee\n";
	cin >> netPay;
	cout << "Enter the human resource allowance of the employee\n";
	cin >> humanResAllowance;
	cout << "Enter the darness allowance of the employee\n";
	cin >> dearnessAllowance;
	cout << "Enter the profitablity fund of the employee\n";
	cin >> profitablilityFund;
	netPay = basicPay + humanResAllowance + dearnessAllowance - profitablilityFund;
	cout << "The net pay of the employee is ";
	cout << netPay << "\n";
}
void Salary::setBasicPay(double bp)
{
	basicPay = bp;
}
void Salary::setNetPay(double np)
{
	netPay = np;
}
void Salary::sethumanResAllowance(double hra)
{
	humanResAllowance = hra;
}
void Salary::setdearnessAllowance(double da)
{
	dearnessAllowance = da;
}
void Salary::setprofitablilityFund(double pfund)
{
	profitablilityFund = pfund;
}
void Salary::display()
{
	Employee::display();
	cout << "the basic pay of the employee is \n";
	cout <<  basicPay;
	cout << "the human resource allowance of the employee is \n";
	cout <<  humanResAllowance;
	cout << "the darness allowance of the employee is \n";
	cout << dearnessAllowance;
	cout << "the profitablity fund of the employee is\n";
	cout <<  profitablilityFund;
	cout << "The net pay of the employee is ";
	cout << netPay << "\n";
}
Salary Salary::operator= (Salary other)
{
	if (other.basicPay == this->basicPay && other.humanResAllowance == this->humanResAllowance && other.dearnessAllowance == this->dearnessAllowance && other.profitablilityFund == this->profitablilityFund)
	{
		return *this;
	}
	profitablilityFund = other.profitablilityFund;
	humanResAllowance = other.humanResAllowance;
	basicPay = other.basicPay;
	dearnessAllowance = other.dearnessAllowance;
	netPay = netPay;
	return *this;
}