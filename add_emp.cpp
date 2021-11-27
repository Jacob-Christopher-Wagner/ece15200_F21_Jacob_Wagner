#include "edms.h"

/*
 num:    number of employees in the record
 name:   array contains employees' names
 empid:  array contains employees' IDs
 dept:   array contains employees' departments
 doj:    array contains employees' start date
 salary: array contains employess' annual salary
*/

void addEmployee(int &num, string name[], int empid[], 
	string dept[], string doj[], int salary[]) {
	
	int id, loc = num;

	cout << "Enter employee ID: ";
	cin >> id;
	
	if (num >= 1) {
		for (int i = 0; i < num; i++) {
			if (id < empid[i]) {
				loc = i;
				break;
			}				
		}

		for (int i = num - 1; i >= loc; i--) {
			name[i + 1] = name[i];
			empid[i + 1] = empid[i];
			dept[i + 1] = dept[i];
			doj[i + 1] = doj[i];
			salary[i + 1] = salary[i];
		}
	}

	empid[loc] = id;
	
	cout << "Enter employee's name: ";
	cin.ignore();
	getline(cin, name[loc]);
	
	cout << "Enter employee's department: ";
	getline(cin, dept[loc]);

	cout << "Enter employee's start date: ";
	cin >> doj[loc];

	cout << "Enter employee's annual salary: ";
	cin >> salary[loc];

	num = num + 1;
}