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
	string emp_name;
	string choice;
	bool valid = false;
	int eid, found = 0;

	// Lambda expression to print one employee
	auto display_employee = [name, dept, doj, salary](int i) {
		cout << "Name: " << name[i] << endl;
		cout << "Department: " << dept[i] << endl;
		cout << "Start Date: " << doj[i] << endl;
		cout << "Salary: " << salary[i] << endl;
	};

	if (num == 0) {
		cout << "There is no employee information in the record." << endl;
		return;
	}

	
	cout << "Enter 0 for search by employee ID." << endl 
		 << "Otherwise search by name will be performed." << endl;
	cin.ignore();
	getline(cin,choice);

	// If choice is 0
	// Ask user to input employee ID in a variable eid
	if (choice.compare("0")!=0) {
		// If choice is other than 0
		// Ask user to input employee name in a variable emp_name
		while (!valid) {

			cout << "\nEnter employee's name: ";
			getline(cin.ignore(), emp_name);
			for (int i = 0; i < num; i++) {
				if (emp_name.compare(name[i])) {
					display_employee(i);
					valid = true;
					break;
				}

				if (!emp_name.compare(name[i]) && i == num - 1) {
					cout << "Employee with the name: " << emp_name << " does not exist.\n";


				}
			}
		}

	}
	else {
		
		// Scan empid to find a match for eid
		// Find the location, loc, of given employee ID
		cout << "\nEnter employee ID: ";
		cin >> eid;
		while (!valid) {
			for (int i = 0; i < num; i++) {
				if (empid[i] == eid) {
					display_employee(i);
					valid = true;
					break;
				}

				if (i == num - 1) {
					cout << "Employee with the number: " << eid << " does not exist.\n";
					cin.clear();
					cin.ignore();
					cout << "\nEnter employee ID: ";
					cin >> eid;
				}
			}


		}
			

		
	}
	
	
	
}

