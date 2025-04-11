// main.cpp - Teresa
#include "../Meal_Plans/meal_plans.h"
#include "../Workouts/workouts.h"
#include "../Calorie_Tracker/calorie_tracker.h"
#include "../Authentication/authy.h"
#include <iostream>

int main() {
    std::cout << "=== Welcome to the Health Management System ===\n";

    if (!login()) {
        std::cout << "\nWe're Sorry...We couldn't Log In...Exiting...\n";
        return 0;
    }

    while (true) {
        int choice;
        std::cout << "\nMain Menu:\n";
        std::cout << "1. Meal Plan Options\n";
        std::cout << "2. Workout Suggestions\n";
        std::cout << "3. Track My Calories\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int dietChoice;
                std::string dietaryPreference;
                std::cout << "Choose your dietary preference:\n";
                std::cout << "1. None\n2. Vegetarian\n3. Vegan\n";
                std::cout << "Enter your choice: ";
                std::cin >> dietChoice;

                switch (dietChoice) {
                    case 1: dietaryPreference = "None"; break;
                    case 2: dietaryPreference = "Vegetarian"; break;
                    case 3: dietaryPreference = "Vegan"; break;
                    default:
                        std::cout << "Invalid choice. Defaulting to 'None'.\n";
                        dietaryPreference = "None";
                        break;
                }

                displayFilteredPlans(dietaryPreference);
                break;
            }

            case 2:
                suggestWorkouts();
                break;

            case 3:
                trackCalories();
                break;

            case 4:
                std::cout << "\nThanks for using the Health Management System. Goodbye!\n";
                return 0;

            default:
                std::cout << "\nInvalid choice. Please try again.\n";
        }
    }

    return 0;
}