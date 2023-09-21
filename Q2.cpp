// File Name : Q2.cpp
//
// Author: Nitin Jibhau Aher
// Date: 9/10/2023
// Assignment Number: 4
// CS 5301.001 Fall 2023
//
// Larger than n.

#include <iostream>

using namespace std;  

void GreaterNumber(int arr[], int size, int n) {
    for (int i = 0; i < size; i++) {
        if (arr[i] > n) { // Check if the current element is greater than n
            cout << arr[i] << " "; // If true, print the current element followed by a space
        }
    }
    cout << endl; // Print a newline character to end the line of output
}

int main() {
    int arr[] = { 12, 30, 16, 27, 9, 2, 14, 6, 5, 11 }; // Example array of integers
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int n; // Declare a variable to store user input

    cout << "Enter a number n: "; // Prompt the user to enter a number
    cin >> n; // Store the user's input in the 'n' variable

    cout << "Numbers greater than " << n << " in the array are: "; // Display a message

    GreaterNumber(arr, size, n); // Call the function to display numbers greater than 'n'

    return 0;
}