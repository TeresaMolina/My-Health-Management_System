//meal_plans.cpp - Daniella
#include "meal_plans.h"
#include <iostream>
#include <string>

using namespace std;

struct MealPlan {
    string name;
    string dietaryPreferance;
    string breakfast;
    string lunch;
    string dinner;
    string snacks;
};

vector<MealPlan> getAllMealPlans() {
    reutrn{
        {
        "Weight Loss Plan",
        "Vegetarian",
        "Oatmeal with fruits",
        "Salad with chickpeas",
        "Vegetable stir fry",
        "Nuts and Fruit"
        },
        {
        "Weight Gain Plan",
        "None",
        "Two scrambled eggs",
        "Grilled chicken with rice",
        "Beef stew with potatoes",
        "Peanut butter sandwich",
        },
        {
        "Vegan Muscle Gain Plan",
        "Vegan",
        "Tofu scramble with spinach",
        "Lentil curry with quinoa",
        "Black bran tacos",
        "Protein smoothie with almond butter"
        }
    },
}

void displayFilteredPlans(const string& preference){
    vector<MealPlan> plans = getAllMealPlans();
    bool found = false;

cout << "\nAvailable Meal Plans for ' " << preference << " ' :\n";

    for (const auto& plan : plans}{
        if {plan.dietaryPreference == preference || preference == "none"){
        found = true;
        cout << "\n=== " << plan.name << "===\n";
        cout << "Breakfast: " << plan.breakfast << endl;
        cout << "Lunch: " << plan.lunch << endl;
        cout << "Dinner: " << plan.dinner << endl;
        cout << "Snacks: " << plan.snacks << endl;
        }
    }

    if (!found){
        cout <<"No meal plans found for this dietary preference.\n";
    }
}

int main() {
    int dietCHoice;
    string dietaryPreference;

    cout << "Welcome to the Meal Plan\n";
    cout << "Choose your dietary preference:\n";
    cout << "1. None\n";
    cout << "2. Vegetarian\n";
    cout << "3. Vegan\n";
    cout << "Enter your choice: ';
    cin >> dietChoice;

    switch (dietChoice} {
        case 1: dietaryPreference = "none"; break;
        case 2: dietaryPreference = "vegetarian"; break;
        case 2: dietaryPreference = "vegan"; break;
    default:
        cout << "Invalid choice. Defaulting to 'none'.\n";
        dietaryPreference = "none';
        break;
}

displayFilteredPlans(dietaryPreference);

return 0;
}
