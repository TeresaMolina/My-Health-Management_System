//main.cpp - Teresa

#include "meal_plans.h"
#include "workouts.h"
#include "calorie_tracker.h"
#include "authy.h"
#include <iostream>;


int main(){
	
std::cout << "=== Welcome to the Calorie Tracker App ===\n";
	
	if (!login()){
		std::cout << "\nWe're Sorry...We couldn't Log In...Exiting...\n";
		return 0;
	}



	while (true){
	
int choice;
		std::cout << "\nMain Menu:\n";
        std::cout << "1. Meal Plan Options\n";
        std::cout << "2. Workout Suggestions\n";
        std::cout << "3. Track My Calories\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
		
	switch (choice){
		case 1:
			displayMealPlans();
			break;

		case 2: 
			suggestWorkouts();
			break;

		case 3:
			trackCalories();
			break;

              case 4:
                std::cout << "\nThanks for using the Calorie Tracker App. Goodbye!\n";
                return 0;

            default:
                std::cout << "\nInvalid choice. Please try again.\n";
        }
    }

    return 0;
}
