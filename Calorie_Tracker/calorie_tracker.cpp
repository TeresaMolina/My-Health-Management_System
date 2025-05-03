// calorie_tracker.cpp - Jamari
#include "calorie_tracker.h"
#include <iostream>
#include <cmath>

using namespace std;

// Calculate BMR using the Harris-Benedict Equation
double calculateBMR(int age, char gender, int heightInInches, int weight) {
    if (gender == 'M' || gender == 'm') {
        return 66 + (6.23 * weight) + (12.7 * heightInInches) - (6.8 * age);
    } else if (gender == 'F' || gender == 'f') {
        return 655 + (4.35 * weight) + (4.7 * heightInInches) - (4.7 * age);
    } else {
        cerr << "Invalid gender input." << endl;
        return -1;
    }
}

// Activity level multiplier
double getActivityMultiplier(int level) {
    switch (level) {
        case 1: return 1.2;
        case 2: return 1.375;
        case 3: return 1.55;
        case 4: return 1.725;
        case 5: return 1.9;
        default: return 1.2;
    }
}

// Main function to interact with user and show results
void trackCalories() {
    int age, feet, inches, weight, dailyActivity;
    char gender;

    cout << "Enter age (in years): ";
    cin >> age;

    cout << "Enter gender (M/F): ";
    cin >> gender;

    cout << "Enter height:\n  Feet: ";
    cin >> feet;
    cout << "  Inches: ";
    cin >> inches;

    cout << "Enter weight (in lbs): ";
    cin >> weight;

    cout << "Enter daily activity level (1=None to 5=Extreme): ";
    cin >> dailyActivity;

    int totalHeight = (feet * 12) + inches;
    double bmr = calculateBMR(age, gender, totalHeight, weight);
    double activityMultiplier = getActivityMultiplier(dailyActivity);
    double maintenanceCalories = bmr * activityMultiplier;

    if (bmr == -1) return;

    double mildDeficit = maintenanceCalories - 300;
    double mildSurplus = maintenanceCalories + 300;

    cout << "\n--- Calorie Summary ---\n";
    cout << "BMR: " << round(bmr) << " kcal/day\n";
    cout << "Maintenance: " << round(maintenanceCalories) << " kcal/day\n";
    cout << "For Weight Loss (~300 kcal deficit): " << round(mildDeficit) << " kcal/day\n";
    cout << "For Weight Gain (~300 kcal surplus): " << round(mildSurplus) << " kcal/day\n";
}
