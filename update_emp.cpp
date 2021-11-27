#include "edms.h"

/*
 num:    number of employees in the record
 name:   array contains employees' names
 empid:  array contains employees' IDs
 dept:   array contains employees' departments
 doj:    array contains employees' start date
 salary: array contains employess' annual salary
*/

void updateEmployee(int num, string name[], int empid[],
	string dept[], string doj[], int salary[]) {

	int eid;

	if (num >= 1) {
		cout << "\nEnter employee ID: ";
		cin >> eid;
		// Scan empid array to find a match for given eid
		// If a match found, then ask user to update for department and salary
		// The user may update department, salary, or both.
		// If not matched, display employee with given eid does not exist.
		// Your code

	}
	else {
		cout << "There is no employee information in the record." << endl;
	}
}