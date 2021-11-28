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
	string depts[] = { "Marketing", "Finance", "Human Resource", "Technical" };
	int choice=-1, max_sal = 200000, min_sal = 30000;
	int eid, loc; 
	bool valid = false;

	if (num >= 1) {
		// Find the location, loc, of given employee ID
		cout << "\nEnter employee ID: ";
		cin >> eid;
		while (!valid) {
			for (int i = 0; i < num; i++) {
				if (empid[i] == eid) {
					loc = i;
					valid = true;
					break;
				}

				if (i == num - 1) {
					cout << "Employee with the number: " << eid << " not found.\n";
					cin.clear();
					cin.ignore();
					cout << "\nEnter employee ID: ";
					cin >> eid;
				}
			}
			
			
		}

		valid = false;

		while (!(choice == 1 || choice == 2 || choice == 3)) {
			cout << "Enter a number: \n1. Update department\n2. Update salary\n3. Update both\n";
			cin >> choice;
		}

		if (choice == 1 || choice == 3) {

			
			cout << "\nEnter employee's department: ";
			cin.ignore();
			getline(cin, dept[loc]);

			// Validate department entry
			while (!valid) {
				for (int j = 0; j < sizeof(depts) / sizeof(depts[0]); j++) {

					if (dept[loc] == depts[j]) {
						valid = true;
						break;
					}
					if (j == (sizeof(depts) / sizeof(depts[0]) - 1)) {
						cout << "Error: Employee department invalid\n";
						cout << "Enter employee's department: ";
						getline(cin, dept[loc]);
					}
				}
						
				
			}
					
		}
			
		valid = false; 

		if (choice == 2 || choice == 3) {
			// Validate salary
			while (!valid) {
				cout << "Enter employee's annual salary: ";
				
				cin >> salary[loc];
				if (salary[loc] >= min_sal && salary[loc] <= max_sal) {
					valid = true;
					break;
				}

				cin.clear();
				cin.ignore();
				cout << "Error: Employee salary must be between " << min_sal << " and " << max_sal << endl;
				
			}
		}
			
	}
	else {
		cout << "There is no employee information in the record." << endl;
	}
}