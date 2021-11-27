#include "edms.h"

/*
 num:    number of employees in the record
 name:   array contains employees' names
 empid:  array contains employees' IDs
 dept:   array contains employees' departments
 doj:    array contains employees' start date
 salary: array contains employess' annual salary
*/

void searchEmployee(int num, string name[], int empid[],
	string dept[], string doj[], int salary[]) {

	int sch, found = 0;

	if (num == 0) {
		cout << "There is no employee information in the record." << endl;
		return;
	}

	cout << "Enter 0 for search by employee ID." << endl 
		 << "Otherwise search by name will be performed." << endl;
	
	// Ask user choice and store it in sch
	// Your code

	// If choice is 0
	// Ask user to input employee ID in a variable eid
	// Scan empid to find a match for eid
	// If a match found, display Name, Department, Start date, and Salary
	// If not matched, display employee with given eid does not exist.
	// Your code
	
	// If choice is other than 0
	// Ask user to input employee name in a variable emp_name
	// Scan name to find a match for emp_name
	// If a match found, display Employee ID, Department, Start date, and Salary
	// If not matched, display employee with given emp_name does not exist.
	// Your code
}