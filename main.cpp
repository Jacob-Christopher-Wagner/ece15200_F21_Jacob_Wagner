/*
Name:       Jacob Wagner
Assignment: EDMS Project
Instructor: Quamar Niyaz
Class:      ECE 15200
Date:       10/25/2021
*/
#include <iostream>
#include "edms.h"


int main()
{
    // Arrays for maintaining employees' records
    string name[100]; // contains employees' names
    string dept[100]; // contains employees' departments
    string doj[100]; // contains employees' start date
    int  empid[100];  // contains employees' IDs
    int  salary[100]; // contains employess' annual salary

    int  num_emp = 0; // number of employees in the database
    int  choice;      // operation choice

    cout << "Welcome to EDMS project by Jacob Wagner\n";
    do {
        cout << "0. Display all employees information\n";
        cout << "1. Add a new employee's record\n";
        cout << "2. Delete an employee's record\n";
        cout << "3. Update an employee's record\n";
        cout << "4. Search an employee's record\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case 0:
            displayEmployees(num_emp, name, empid, dept, doj, salary);
            break;
        case 1:
            addEmployee(num_emp, name, empid, dept, doj, salary);
            break;
        case 2:
            deleteEmployee(num_emp, name, empid, dept, doj, salary);
            break;
        case 3:
            updateEmployee(num_emp, name, empid, dept, doj, salary);
            break;
        case 4:
            searchEmployee(num_emp, name, empid, dept, doj, salary);
            break;
        default:
            cout << "******* Closing EDMS ************\n";
        }
        cout << endl;
    } while (choice >= 0 && choice <= 4);

    return 0;
}