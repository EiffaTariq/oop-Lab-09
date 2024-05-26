#include<iostream>
#include "Employee.h"
using namespace std;
Employee::Employee()
{
	name = '\0';
	designation = '\0';
	ID = '\0';
}
Employee::Employee(string id, string nam, string desig)
{
	name = nam;
	designation = desig;
	ID = id;
}
string Employee::getEmployeeDetails()
{
	cout << "Enter the name pf the employee\n";
	cin >> name;
	cout << "Enter the designantion of the employee\n";
	cin >> designation;
	cout << "Enter the employee ID\n";
	cin >> ID;
	return name;
}
void Employee::display()
{
	cout << "The name of the employee is ";
	cout << name;
	cout << "\n";
	cout << "the designantion of the employee is ";
	cout << designation;
	cout << "\n";
	cout << "the employee ID is ";
	cout << ID;
	cout << "\n";
}
void Employee::setName(string nam)
{
	name = nam;
}
void Employee::setDesignation(string desig)
{
	designation = desig;
}
void Employee::setID(string id)
{
	ID = id;
}
string Employee::getName()
{
	return name;
}
string Employee::getID()
{
	return ID;
}
string Employee::getDesignation()
{
	return designation;
}
Employee::Employee(const Employee& ref)
{
	name = ref.name;
	ID = ref.ID;
	designation = ref.designation;
}
Employee Employee::operator= (Employee other)
{
	if (other.name == this->name && other.designation == this->designation && other.ID == this->ID)
	{
		return *this;
	}
	name = other.name;
	designation = other.designation;
	ID = other.ID;
	return *this;
}
