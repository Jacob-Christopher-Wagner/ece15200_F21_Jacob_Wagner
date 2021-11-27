#include "edms.h"

/*
 num:    number of employees in the record
 name:   array contains employees' names
 empid:  array contains employees' IDs
 dept:   array contains employees' departments
 doj:    array contains employees' start date
 salary: array contains employess' annual salary
*/

void deleteEmployee(int &num, string name[], int empid[],
	string dept[], string doj[], int salary[]) {

	int eid, loc = -1;

	if (num >= 1) {
		cout << "Enter employee ID:";
		cin >> eid;
		// Find the location, loc, of given employee ID
		// Your code below

		// If employee is found, i.e. loc >= 0
		// 1. Shift each employee's information from (loc + 1) position onward to left
		// 2. Decrease the number of employees
		// If not found, display no employee record exists for given eid
		// Your code below
	}
	else {
		cout << "There is no employee information in the record." << endl;
				
	}
}