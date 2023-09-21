// File Name : main.cpp
//
// Author: Nitin Jibhau Aher
// Date: 9/10/2023
// Assignment Number: 1
// CS 5301.001 Fall 2023
//
// Olympic Medal Count.


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Define a struct called Country to represent information about a country's medals
struct Country {
    string name;
    int gold;
    int silver;
    int bronze;
};

// Function to display the table of countries
void displayCountries(const Country countries[], int numCountries) {
    // Display the header for the table with proper formatting
    cout << left << setw(3) << "N" << setw(15) << "Country" << right
        << setw(10) << "Gold" << setw(10) << "Silver" << setw(10) << "Bronze"
        << setw(10) << "Total" << endl;

    // Loop through each country and display its information in the table
    for (int i = 0; i < numCountries; i++) {
        int total = countries[i].gold + countries[i].silver + countries[i].bronze;
        // Display the country's name and medal counts with proper formatting
        cout << left << setw(3) << i + 1 << setw(15) << countries[i].name << right
            << setw(10) << countries[i].gold << setw(10) << countries[i].silver
            << setw(10) << countries[i].bronze << setw(10) << total << endl;
    }
}

// Function to update the medal counts for a given country
void updateMedalCounts(Country countries[], int countryNumber, char medalType) {
    // Check if the countryNumber is within a valid range (1 to 8)
    if (countryNumber >= 1) {
        int index = countryNumber - 1; // Convert to zero-based index
        switch (medalType) {
        case 'G':
            countries[index].gold++; // Increment the gold count for the country
            break;
        case 'S':
            countries[index].silver++; // Increment the silver count for the country
            break;
        case 'B':
            countries[index].bronze++; // Increment the bronze count for the country
            break;
        }
    }
}

// Function to determine the total number of medals awarded
int getTotalMedals(const Country countries[], int numCountries) {
    int totalMedals = 0;
    // Loop through each country and sum up their total medals
    for (int i = 0; i < numCountries; i++) {
        totalMedals += countries[i].gold + countries[i].silver + countries[i].bronze;
    }
    return totalMedals;
}

// Function to determine which country has the most gold medals
string getCountryWithMostGold(const Country countries[], int numCountries) {
    int maxGold = 0;
    string countryWithMostGold = "";

    // Loop through each country and find the one with the most gold medals
    for (int i = 0; i < numCountries; i++) {
        if (countries[i].gold > maxGold) {
            maxGold = countries[i].gold;
            countryWithMostGold = countries[i].name;
        }
    }

    return countryWithMostGold;
}

int main() {
    // Initialize an array of Country structs with information about 8 countries
    Country countries[8] = {
        {"Australia", 11, 14, 12},
        {"Canada", 5, 0, 1},
        {"China", 9, 14, 11},
        {"Great Britain", 8, 4, 8},
        {"Japan", 8, 10, 10},
        {"Netherlands", 7, 6, 7},
        {"Russia", 6, 10, 8},
        {"USA", 10, 6, 7}
    };

    int choice;
    do {
        // Display the table of countries and prompt the user for input
        displayCountries(countries, 8);
        cout << "Enter the country number (0 to quit): " << endl;
        cin >> choice;

        if (choice >= 1) {
            char medalType;
            // Prompt the user to enter the type of medal (G, S, or B)
            cout << "Enter the medal type (G, S, or B): " << endl;
            cin >> medalType;

            // Update the medal counts for the selected country
            updateMedalCounts(countries, choice, medalType);
        }
    } while (choice != 0);

    // Calculate the total number of medals awarded to all countries
    int totalMedals = getTotalMedals(countries, 8);
    // Find the country with the most gold medals
    string mostGoldCountry = getCountryWithMostGold(countries, 8);

    // Display the total medals awarded and the country with the most gold medals
    cout << "Total medals awarded to all countries: " << totalMedals << endl;
    cout << "Country with the most Gold medals: " << mostGoldCountry << endl;
    cout << "Program ended with exit code: 0" << endl;

    return 0;
}
