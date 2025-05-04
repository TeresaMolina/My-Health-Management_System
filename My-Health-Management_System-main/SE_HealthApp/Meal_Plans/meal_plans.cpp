// meal_plans.cpp - Daniella
#include "meal_plans.h"
#include <string>
#include <iostream>

// using namespace std;
    // Teresa's fix --> std::
MealPlans::MealPlans(){
    populateMealPlans();
}

void MealPlans::populateMealPlans(){
    //regular weight loss meal options
    weightLossBreakfasts = {"Oatmeal with berries", "Greek yogurt with honey", "Smoothie with spinach and banana"};
    weightLossLunches = {"Grilled chicken salad", "Quinoa and veggie bowl", "Turkey wrap with lettuce"};
    weightLossDinners = {"Baked salmon with asparagus", "Grilled tofu with broccoli", "Chicken stir fry with brown rice"};
    weightLossSnacks = {"Carrot sticks with hummus", "Apple slices", "Almonds"};

    //regular weight gain meal options
    weightGainBreakfasts = {"Peanut butter banana toast", "Eggs and avocado on toast", "Protein pancakes"};
    weightGainLunches = {"Chicken and rice bowl", "Beef burrito", "Pasta with meat sauce"};
    weightGainDinners = {"Steak with mashed potatoes", "Salmon with wild rice", "Chicken Afredo pasta"};
    weightGainSnacks = {"Protein bars", "Trail mix", "Nut butter on crackers"};

    //vegetarian meal options
    vegetarianMeals = {
        "Vegetarian omelet with spinach", 
        "Grilled veggie wrap", 
        "Tofu stir fry", 
        "Chickpea salad", 
        "Vegetarian chili"
    };

    //keto meal options
    ketoMeals = {
        "Scrambled eggs with cheese", 
        "Zucchini noodles with pesto", 
        "Grilled chicken with avocado", 
        "Cauliflower rice bowl", 
        "Keto fat bombs"
    };

    //vegan meal options
    veganMeals = {
        "Avocado toast", 
        "Vegan buddha bowl", 
        "Lentil curry", 
        "Tofu and quinoa salad", 
        "Vegan protein smoothie"
    };
}

void MealPlans::displayMealPlans(const std::string& goal, const std::string& preference) const {
    std::cout << "=== Meal Plan: " << (goal == "gain" ? "Weight Gain" : "Weight Loss");
    std::cout << " | Preference: " << preference << " ===\n";

    if (preference == "vegetarian") {
        displayMeals(vegetarianMeals, "All Vegetarian Meals");
    } else if (preference == "keto") {
        displayMeals(ketoMeals, "All Keto Meals");
    } else if (preference == "vegan") {
        displayMeals(veganMeals, "All Vegan Meals");
    } else if (goal == "lose") {
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
        std::cout << "Invalid goal or dietary preference.\n";
    }
}

void MealPlans::displayMeals(const std::vector<std::string>& meals, const std::string& type) const {
    std::cout << type << " Options:\n";
    for (const auto& meal : meals) {
        std::cout << " - " << meal << "\n";
    }
        std::cout << "\n";
}
