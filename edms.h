#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
using namespace std;

/*
 num:    number of employees in the record
 name:   array contains employees' names
 empid:  array contains employees' IDs
 dept:   array contains employees' departments
 doj:    array contains employees' start date
 salary: array contains employess' annual salary
*/

void displayEmployees(int num, string name[], int empid[],
	string dept[], string doj[], int salary[]);

void addEmployee(int &num, string name[], int empid[],
	string dept[], string doj[], int salary[]);

void deleteEmployee(int &num, string name[], int empid[],
	string dept[], string doj[], int salary[]);

void updateEmployee(int num, string name[], int empid[],
	string dept[], string doj[], int salary[]);

void searchEmployee(int num, string name[], int empid[],
	string dept[], string doj[], int salary[]);