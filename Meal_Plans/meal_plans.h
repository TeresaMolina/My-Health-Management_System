// meal_plans.h - Daniella
#ifndef MEAL_PLANS_H

#define MEAL_PLANS_H

#include <string>
#include <vector>

class MealPlans {
public:
  MealPlans();
  void displayMealPlan(const string& goal) const;

private:
  vector<string> weightLossBreakfasts;
  vector<string> weightLossLunches;
  vector<string> weightLossDinners;
  vector<string> weightLossSnacks;
  
  vector<string> weightGainBreakfasts;
  vector<string> weightGainLunches;
  vector<string> weightGainDinners;
  vector<string> weightGainSnacks;

void populateMealPlans();
void displayMeals(const vector<string>& meals, const string& type) const;
};

#endif // MEAL_PLANS_H
