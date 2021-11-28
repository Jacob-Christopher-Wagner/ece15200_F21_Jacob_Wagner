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
	bool valid = false;
	int eid;

	if (num >= 1) {
		while (!valid) {
			cout << "Enter employee ID:";
			cin.ignore();
			cin >> eid;
			// Find the location, loc, of given employee ID
			for (int i = 0; i < num; i++) {
				// If employee is found, i.e. loc >= 0
				if (empid[i] == eid) {
					for (int j = i; i < num; i++) {
						name[j] = name[j + 1];
						empid[j] = empid[j + 1];
						dept[j] = dept[j + 1];
						doj[j] = doj[j + 1];
						salary[j] = salary[j + 1];
						valid = true;
						cin.ignore();
						cin.clear();
						break;
					}

					num--;
				}

				if (empid[i]!=eid && i == num - 1) {
					cout << "No employee found with the number: " << eid << endl;
					cin.ignore();
					cin.clear();
					break;
				}
			}

			
		}

		cout << "Error: Enter a number.\n";
	}
	else {
		cout << "There is no employee information in the record." << endl;
				
	}
}