// main.cpp - Teresa
#include "meal_plans.h"
#include "workouts.h"
#include "calorie_tracker.h"
#include "authy.h"

#include <string>
#include <iostream>

int main() {
    std::cout << "=== Welcome to the Health Management System ===\n";

    if (!login()) {
        std::cout << "\nWe're Sorry...We couldn't Log In...Exiting...\n";
        return 0;
    }

    MealPlans mealPlans;

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
                std::string goal, preference;
                // std::string preference;
                
                std::cout << "Enter your weight goal ('lose' or 'gain'): ";
                std::cin >> goal;

                std::cout << "Enter your dietary preference ('none', 'vegetarian', 'keto', 'vegan'): ";
                std::cin >> preference;

                if (preference == "none"){
                    preference = "";
                }

                mealPlans.displayMealPlans(goal, preference);
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
