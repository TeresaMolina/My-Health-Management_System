//main.cpp - Teresa

#include "meal_plans.h"
#include "workouts.h"
#include "calorie_tracker.h"
#include <iostream>;
int main(){
	while (true){
	
int choice;
		std::cout << "\nWelcome to the App Menu: \n";
		std::cout << "\n1. Meal Plan Options\n 2. Workout Suggestions\n 3. Track My Calories\n 4. Exit\n";
		std::cout << "Please Enter Your Choice";
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
			std::cout << "...Exiting...\n";
			return 0;
		default:
			std::cout << "Invalid Choice. Please Try Again.\n";
		}
	}
}
