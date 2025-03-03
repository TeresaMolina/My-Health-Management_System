// calorie_tracker.cpp - Jamari
#include "calorie_tracker.h"
#include <iostream>

using namespace std;

void trackCalories() {
    int calorieDeficiency = 0;
    int age, feet, inches, weight, dailyActivity;
    char gender;

    // Get user input
    cout << "Enter age (in years): ";
    cin >> age;

    cout << "Enter gender (M/F): ";
    cin >> gender;

    cout << "Enter height: \n";
    cout << "Feet: ";
    cin >> feet;
    cout << "Inches: ";
    cin >> inches;

    cout << "Enter weight (in lbs): ";
    cin >> weight;

    cout << "Enter daily activity level (1-5, where 1=None, 5=Extreme): ";
    cin >> dailyActivity;

    // Display user input
    cout << "\nUser Information:\n";
    cout << "Age: " << age << " years" << endl;
    cout << "Gender: " << gender << endl;
    cout << "Height: " << feet << "'" << inches << "\"" << endl;
    cout << "Weight: " << weight << " lbs" << endl;
    cout << "Daily Activity Level: " << dailyActivity << endl;

    cout << "Tracking calories...\n";
}
