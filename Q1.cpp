// File Name : Q1.cpp
//
// Author: Nitin Jibhau Aher
// Date: 9/10/2023
// Assignment Number: 4
// CS 5301.001 Fall 2023
//
// Largest / Smallest Array Values.

#include <iostream>

using namespace std;

int main() {
    const int size = 10; // Size of the array
    int arr[size]; // Declare an integer array

    // Input values into the array
    cout << "Enter " << size << " integer values:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }

    int largest = arr[0]; // Initialize largest with the first element
    int smallest = arr[0]; // Initialize smallest with the first element

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    // Display the largest and smallest values
    cout << "Largest value: " << largest << endl;
    cout << "Smallest value: " << smallest << endl;

    return 0;
}
