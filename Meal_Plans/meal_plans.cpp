// meal_plans.cpp - Daniella
#include "meal_plans.h"
#include <iostream>

using namespace std;

MealPlans::MealPlans(){
    populateMealPlans();
}

void MealPlans::populateMealPlans(){
    //weight loss meal options
    weightLossBreakfasts = {"Oatmeal with berries", "Greek yogurt with honey", "Smoothie with spinach and banana"};
    weightLossLunches = {"Grilled chicken salad", "Quinoa and veggie bowl", "Turkey wrap with lettuce"};
    weightLossDinners = {"Baked salmon with asparagus", "Grilled tofu with broccoli", "Chicken stir fry with brown rice"};
    weightLossSnacks = {"Carrot sticks with hummus", "Apple slices", "Almonds"};

    //weight gain meal options
    weightGainBreakfasts = {"Peanut butter banana toast", "Eggs and avocado on toast", "Protein pancakes"};
    weightGainLunches = {"Chicken and rice bowl", "Beef burrito", "Pasta with meat sauce"};
    weightGainDinners = {"Steak with mashed potatoes", "Salmon with wild rice", "Chicken Afredo pasta"};
    weightGainSnacks = {"Protein bars", "Trail mix", "Nut butter on crackers"};
}

void MealPlans::displayMealPlans(const string& goal) const {
    cout << "=== Meal Plan for " << (goal == "gain" ? "Weight Gain" : "Weight Loss") << "===\n";
    if (goal == "lose") {
        displayMeals(weightLossBreakfasts, "Breakfast");
        displayMeals(weightLossLunches, "Lunch");
        displayMeals(weightLossDinners, "Dinner");
        displayMeals(weightLossSnacks, "Snacks");
    } else if (goal == "gain") {
        displayMeals(weightGainBreakfasts, "Breakfast");
        displayMeals(weightGainLunches, "Lunch");
        displayMeals(weightGainDinners, "Dinner");
        displayMeals(weightGainSnacks, "Snacks");
    } else {
        cout << "Invalid goal. Please choose 'lose' or 'gain'.\n";
    }
}

void MealPlans::displayMeals(const vector<string>& meals, const string& type) const {
    cout << type << " Options:\n";
    for (const auto& meal : meals) {
        cout << " - " << meal << "\n";
    }
        cout << "\n";
}
