// File Name : Q5.cpp
//
// Author: Nitin Jibhau Aher
// Date: 9/10/2023
// Assignment Number: 4
// CS 5301.001 Fall 2023
//
// Monthly Budget.

#include <iostream>
#include <iomanip>

using namespace std;

// Define the MonthlyBudget structure
struct MonthlyBudget {
    double housing;
    double utilities;
    double household_expenses;
    double transportation;
    double food;
    double medical;
    double insurance;
    double entertainment;
    double clothing;
    double miscellaneous;
};

// Function to input expenses
void inputExpenses(MonthlyBudget &budget) {
    cout << "Enter housing expenses: $";
    cin >> budget.housing;

    cout << "Enter utilities expenses: $";
    cin >> budget.utilities;

    cout << "Enter household expenses: $";
    cin >> budget.household_expenses;

    cout << "Enter transportation expenses: $";
    cin >> budget.transportation;

    cout << "Enter food expenses: $";
    cin >> budget.food;

    cout << "Enter medical expenses: $";
    cin >> budget.medical;

    cout << "Enter insurance expenses: $";
    cin >> budget.insurance;

    cout << "Enter entertainment expenses: $";
    cin >> budget.entertainment;

    cout << "Enter clothing expenses: $";
    cin >> budget.clothing;

    cout << "Enter miscellaneous expenses: $";
    cin >> budget.miscellaneous;
}

// Function to display the report
void displayReport(const MonthlyBudget &budget) {
    double totalBudget = 500 + 150 + 65 + 50 + 250 + 30 + 100 + 150 + 75 + 50;  // Total budget without user input
    double totalSpent = budget.housing + budget.utilities + budget.household_expenses +
        budget.transportation + budget.food + budget.medical +
        budget.insurance + budget.entertainment + budget.clothing + budget.miscellaneous;

    cout << "\nExpense Category\tBudget\tSpent\tDifference" << endl;
    cout << "------------------------------------------------" << endl;
    cout << "Housing\t\t\t$500.00\t$" << fixed << setprecision(2) << budget.housing << "\t$" << 500.00 - budget.housing << endl;
    cout << "Utilities\t\t$150.00\t$" << fixed << setprecision(2) << budget.utilities << "\t$" << 150.00 - budget.utilities << endl;
    cout << "Household Expenses\t$65.00\t$" << fixed << setprecision(2) << budget.household_expenses << "\t$" << 65.00 - budget.household_expenses << endl;
    cout << "Transportation\t\t$50.00\t$" << fixed << setprecision(2) << budget.transportation << "\t$" << 50.00 - budget.transportation << endl;
    cout << "Food\t\t\t$250.00\t$" << fixed << setprecision(2) << budget.food << "\t$" << 250.00 - budget.food << endl;
    cout << "Medical\t\t\t$30.00\t$" << fixed << setprecision(2) << budget.medical << "\t$" << 30.00 - budget.medical << endl;
    cout << "Insurance\t\t$100.00\t$" << fixed << setprecision(2) << budget.insurance << "\t$" << 100.00 - budget.insurance << endl;
    cout << "Entertainment\t\t$150.00\t$" << fixed << setprecision(2) << budget.entertainment << "\t$" << 150.00 - budget.entertainment << endl;
    cout << "Clothing\t\t$75.00\t$" << fixed << setprecision(2) << budget.clothing << "\t$" << 75.00 - budget.clothing << endl;
    cout << "Miscellaneous\t\t$50.00\t$" << fixed << setprecision(2) << budget.miscellaneous << "\t$" << 50.00 - budget.miscellaneous << endl;
    cout << "------------------------------------------------" << endl;
    cout << "Total\t\t\t$" << fixed << setprecision(2) << totalBudget << "\t$" << totalSpent << "\t$" << totalBudget - totalSpent << endl;
}

int main() {
    MonthlyBudget monthlyBudget;
    inputExpenses(monthlyBudget);
    displayReport(monthlyBudget);

    return 0;
}
