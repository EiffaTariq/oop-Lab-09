#include<iostream>
#include<string>
#ifndef BANKCREDIT_H
#define BANKCREDIT_H
#include"Employee.h"
#include"Salary.h"
using namespace std;
class BankCredit:public Salary
{
	string bankName;
	string accountNumber;
public:
	BankCredit();
	BankCredit(string bn, string an);
	void getBankDetails();
	void print();
	void setBankName(string bn);
	string setAccountNumber(string an);
	string getBankName()const
	{
		return bankName;
	}
	string getAccountNumber()const
	{
		return accountNumber;
	}
	BankCredit operator= (BankCredit other);
};
#endif