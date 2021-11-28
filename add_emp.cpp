#include "edms.h"

/*
 num:    number of employees in the record
 name:   array contains employees' names
 empid:  array contains employees' IDs
 dept:   array contains employees' departments
 doj:    array contains employees' start date
 salary: array contains employess' annual salary
*/

void addEmployee(int& num, string name[], int empid[],
	string dept[], string doj[], int salary[]) {

	string depts[] = { "Marketing", "Finance", "Human Resource", "Technical" };
	int id, loc = num, max_num = 100, max_id = 99999, min_id = 10000, max_sal = 200000, min_sal = 30000;
	bool valid = false;

	// Validate maximum number of employees not reached
	if (loc < max_num) {
		// Validate employee ID
		while (!valid) {
			cout << "Enter employee ID: ";
			cin.clear();
			cin.ignore();
			cin >> id;
			
				// Check range
				if (id >= min_id && id <= max_id) {
					// Validate whether ID is unique
					if (loc > 0) {
						for (int i = 0; i <= loc; i++) {
							if (id == empid[i]) {
								cout << "Error: User already exists with the ID: " << empid[i] << endl;
								break;
							}

							if (id != empid[i] && i == loc) {
								valid = true;
								break;
							}
						}
					}
					else { valid = true; }

				}
				else {
					cout << "Error: Number must be between " << min_id << " and " << max_id << endl;
				}
			
		}


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

		valid = false;	// Reset validation marker

		cout << "Enter employee's name: ";
		cin.ignore();
		getline(cin, name[loc]);

		// Validate department entry
		while (!valid) {
			cout << "Enter employee's department: ";
			getline(cin, dept[loc]);
			for (int i = 0; i < sizeof(depts) / sizeof(depts[0]); i++) {

				if (dept[loc] == depts[i]) {
					valid = true;
				}
			}
			if (valid) { break; }
			cout << "Error: Employee department invalid\n";


		}

		valid = false;

		cout << "Enter employee's start date: ";
		cin >> doj[loc];
		// Validate start date
		while (!valid) {
			if (isdigit(doj[loc][0]) && isdigit(doj[loc][1]) &&
				doj[loc][2] == '/' && isdigit(doj[loc][3]) && isdigit(doj[loc][4]) &&
				doj[loc][5] == '/' && isdigit(doj[loc][6]) && isdigit(doj[loc][7]) &&
				isdigit(doj[loc][8]) && isdigit(doj[loc][9])) {
				valid = true;
				break;
			}
			cout << "Error: Enter a valid date MM/DD/YYYY\n";
			cout << "Enter employee's start date: ";
			cin >> doj[loc];

		}

		valid = false;

		// Validate salary
		while (!valid) {
			cout << "Enter employee's annual salary: ";

			cin >> salary[loc];

			if (salary[loc] >= min_sal && salary[loc] <= max_sal) {
				valid = true;
				break;
			}

			cout << "Error: Employee salary must be between " << min_sal << " and " << max_sal << endl;

		}
		num = num + 1;
	}
else{cout << "Error: Maximum number of employees reached";}

}

