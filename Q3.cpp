// File Name : Q3.cpp
//
// Author: Nitin Jibhau Aher
// Date: 9/10/2023
// Assignment Number: 4
// CS 5301.001 Fall 2023
//
// Monkey Business.

#include <iostream>
#include <limits>

using namespace std;

const int MONKEYS = 3;
const int DAYS = 5;

int main() {
    double food_data[MONKEYS][DAYS];

    // Input data for each monkey
    for (int monkey = 0; monkey < MONKEYS; ++monkey) {
        cout << "Monkey " << (monkey + 1) << ":" << endl;
        for (int day = 0; day < DAYS; ++day) {
            while (true) {
                cout << "Enter the pounds of food eaten on day " << (day + 1) << ": ";
                if (cin >> food_data[monkey][day] && food_data[monkey][day] >= 0) {
                    break;
                }
                else {
                    cout << "Invalid input. Please enter a non-negative number." << endl;
                }
            }
        }
    }

    // Calculate and display the required information
    double total_food = 0;
    double least_food = numeric_limits<double>::max();
    double greatest_food = 0;

    for (int monkey = 0; monkey < MONKEYS; ++monkey) {
        for (int day = 0; day < DAYS; ++day) {
            total_food += food_data[monkey][day];
            if (food_data[monkey][day] < least_food) {
                least_food = food_data[monkey][day];
            }
            if (food_data[monkey][day] > greatest_food) {
                greatest_food = food_data[monkey][day];
            }
        }
    }

    double average_food = total_food / (MONKEYS * DAYS);

    cout << "\nReport:" << endl;
    cout << "1. Average amount of food eaten per day by the family of monkeys: " << average_food << " pounds" << endl;
    cout << "2. Least amount of food eaten during the week by any one monkey: " << least_food << " pounds" << endl;
    cout << "3. Greatest amount of food eaten during the week by any one monkey: " << greatest_food << " pounds" << endl;

    return 0;
}
