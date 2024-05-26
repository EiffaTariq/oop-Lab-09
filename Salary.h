#include<iostream>
#include<string>
#ifndef SALARY_H
#define SALARY_H
#include"Employee.h"
using namespace std;
class Salary:public Employee
{
	double basicPay;
	double netPay;
	double humanResAllowance;
	double dearnessAllowance;
	double profitablilityFund;
public:
	Salary();
	Salary(double bp, double np, double hra, double da, double pfund);
	void getEmployeeDetails();
	void display();
	void setBasicPay(double bp);
	void setNetPay(double np);
	void sethumanResAllowance(double hra);
	void setdearnessAllowance(double da);
	void setprofitablilityFund(double pfund);
	double getBasicPay()
	{
		return basicPay;
	}
	double getNetPay()
	{
		return netPay;
	}
	double gethumanResAllowance()const
	{
		return humanResAllowance;
	}
	double getdearnessAllowance()const
	{
		return  dearnessAllowance;
	}
	double getProfitablilityFund()const
	{
		return profitablilityFund;
	}
	Salary operator= (Salary other);
};
#endif