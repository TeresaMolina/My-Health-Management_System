// meal_plans.h - Daniella
#ifndef MEAL_PLANS_H
#define MEAL_PLANS_H

#include <string>
#include <vector>

class MealPlans {
public:
	MealPlans();
	void displayMealPlans(const std::string& goal) const;

private:
	std::vector<std::string> weightLossBreakfasts;
	std::vector<std::string> weightLossLunches;
	std::vector<std::string> weightLossDinners;
	std::vector<std::string> weightLossSnacks;

	std::vector<std::string> weightGainBreakfasts;
	std::vector<std::string> weightGainLunches;
	std::vector<std::string> weightGainDinners;
	std::vector<std::string> weightGainSnacks;

	void populateMealPlans();
	void displayMeals(const std::vector<std::string>& meals, const std::string& type) const;
};

#endif // MEAL_PLANS_H
