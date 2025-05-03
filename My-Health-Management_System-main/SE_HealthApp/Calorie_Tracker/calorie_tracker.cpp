// calorie_tracker.cpp - Jamari
#include "calorie_tracker.h"
#include <iostream>
#include <cmath>

// Calculate BMR using the Harris-Benedict Equation
double calculateBMR(int age, char gender, int heightInInches, int weight) {
    if (gender == 'M' || gender == 'm') {
        return 66 + (6.23 * weight) + (12.7 * heightInInches) - (6.8 * age);
    } else if (gender == 'F' || gender == 'f') {
        return 655 + (4.35 * weight) + (4.7 * heightInInches) - (4.7 * age);
    } else {
        std::cerr << "Invalid gender input." << std::endl;
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

    std::cout << "Enter age (in years): ";
    std::cin >> age;

    std::cout << "Enter gender (M/F): ";
    std::cin >> gender;

    std::cout << "Enter height:\n  Feet: ";
    std::cin >> feet;
    std::cout << "  Inches: ";
    std::cin >> inches;

    std::cout << "Enter weight (in lbs): ";
    std::cin >> weight;

    std::cout << "Enter daily activity level (1=None to 5=Extreme): ";
    std::cin >> dailyActivity;

    int totalHeight = (feet * 12) + inches;
    double bmr = calculateBMR(age, gender, totalHeight, weight);
    double activityMultiplier = getActivityMultiplier(dailyActivity);
    double maintenanceCalories = bmr * activityMultiplier;

    if (bmr == -1) return;

    double mildDeficit = maintenanceCalories - 300;
    double mildSurplus = maintenanceCalories + 300;

    std::cout << "\n--- Calorie Summary ---\n";
    std::cout << "BMR: " << std::round(bmr) << " kcal/day\n";
    std::cout << "Maintenance: " << std::round(maintenanceCalories) << " kcal/day\n";
    std::cout << "For Weight Loss (~300 kcal deficit): " << std::round(mildDeficit) << " kcal/day\n";
    std::cout << "For Weight Gain (~300 kcal surplus): " << std::round(mildSurplus) << " kcal/day\n";
}
