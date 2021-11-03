/*
Name:       Jacob Wagner
Assignment: EDMS Project
Instructor: Quamar Niyaz
Class:      ECE 15200
Date:       10/25/2021
*/
#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Welcome to EDMS project by Jacob Wagner\n";
    cout << "Enter '1' to add new employee's record\n";
    cout << "Enter '2' to delete an employee's record\n";
    cout << "Enter '3' to update an employee's record\n";
    cout << "Enter '4' to search an employee's record\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Add an employee's record.\n";
        break;

    case 2:
        cout << "Delete an employee's record.\n";
        break;

    case 3:
        cout << "Update an employee's record.\n";
        break;

    case 4:
        cout << "Search an employee's record.\n";
        break;

    default:
        cout << "Invalid choice\n";
    }

    return 0;
}
