//meal_plans.cpp - Daniella
#include "meal_plans.h"
#include <iostream>
void displayMealPlans() {
    int choice;
    cout << "Select a Meal Plan: \n";
    cout << "1. Weight Loss Plan\n2. Weight Gain Plan\n"
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "\nWeight Loss Meal Plan:\n";
        cout << "Breakfast:...\n";
        cout << "Lunch:...\n";
        cout << "Dinner:...\n";
        cout << "Snacks:...\n";
    }

    else (choice == 2) {
        cout << "\nWeight Gain Meal Plan:\n";
        cout << "Breakfast: Two Scrambled Eggs...\n";
        cout << "Lunch: Grilled Chicken\n"; //vegetables...rice...
        cout << "Dinner:...\n";
        cout << "Snacks:...\n"; //peanut butter...
    }
}
