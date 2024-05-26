#include<iostream>
#include "BankCredit.h"
#include"Salary.h"
using namespace std;
BankCredit::BankCredit()
{
	bankName = '\0';
	accountNumber = '\0';
}
BankCredit::BankCredit(string bn, string an)
{
	bankName = bn;
	accountNumber = an;
}
void BankCredit::getBankDetails()
{
	cout << "Enter details ";
	cout << "Enter bank name";
	cin >> bankName;
	cout << "Enter account number";
	cin >> accountNumber;
}
void BankCredit::print()
{
	Salary s;
	s.display();
	cout << "The account number is " << accountNumber;
	cout << "The bank name is " << bankName;
}
void BankCredit::setBankName(string bn)
{
	bankName = bn;
}
string BankCredit::setAccountNumber(string an)
{
	accountNumber = an;
	return an;
}
BankCredit BankCredit::operator= (BankCredit other)
{
	if (other.accountNumber == this->accountNumber && other.bankName == this->bankName)
	{
		return *this;
	}
	accountNumber = other.accountNumber;
	bankName = other.bankName;
	return *this;
}