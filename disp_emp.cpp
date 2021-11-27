#include "edms.h"

/*
 num:    number of employees in the record
 name:   array contains employees' names
 empid:  array contains employees' IDs
 dept:   array contains employees' departments
 doj:    array contains employees' start date
 salary: array contains employess' annual salary
*/

void displayEmployees(int num, string name[], int empid[],
	string dept[], string doj[], int salary[]) {
	if (num > 0) {
		cout << left; 
		cout << setw(7) << "ID" << setw(20) << "Employee Name" << setw(15)
			 << "Department" << setw(12) << "Start Date" << setw(7) 
			 << "Salary" << endl;

		for (int i = 0; i < num; i++) {
			cout << setw(7) << empid[i] << setw(20) << name[i] << setw(15)
				<< dept[i] << setw(12) << doj[i] << setw(7)
				<< salary[i] << endl;
		}
	}
	else {
		cout << "There is no employee information in the record." << endl;
	}
}