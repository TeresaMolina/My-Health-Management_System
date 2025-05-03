#include "workouts.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

// Returns a list of all available workouts
std::vector<Workout> getAllWorkouts() {
    return {
        {"Push-ups", "Chest", "Easy", "None"},
        {"Bench Press", "Chest", "Medium", "Barbell"},
        {"Chest Fly", "Chest", "Medium", "Dumbbells"},
        {"Pull-ups", "Back", "Hard", "None"},
        {"Bent Over Rows", "Back", "Medium", "Barbell"},
        {"Lat Pulldowns", "Back", "Medium", "Machine"},
        {"Squats", "Legs", "Medium", "None"},
        {"Lunges", "Legs", "Medium", "None"},
        {"Leg Press", "Legs", "Hard", "Machine"},
        {"Shoulder Press", "Shoulders", "Medium", "Dumbbells"},
        {"Lateral Raises", "Shoulders", "Easy", "Dumbbells"},
        {"Front Raises", "Shoulders", "Easy", "Dumbbells"},
        {"Bicep Curls", "Arms", "Easy", "Dumbbells"},
        {"Tricep Dips", "Arms", "Easy", "None"},
        {"Hammer Curls", "Arms", "Medium", "Dumbbells"},
        {"Plank", "Core", "Easy", "None"},
        {"Sit-ups", "Core", "Easy", "None"},
        {"Russian Twists", "Core", "Medium", "None"}
    };
}

// Suggest workouts based on selected muscle group
void suggestWorkouts() {
    std::vector<Workout> workouts = getAllWorkouts();
    std::string group;
    std::vector<Workout> filteredWorkouts;

    std::cout << "\nChoose a muscle group:\n";
    std::cout << "Chest, Back, Legs, Shoulders, Arms, Core\n";
    std::cout << "Enter your choice: ";
    std::cin >> group;

    std::cout << "\nWorkout Suggestions for " << group << ":\n";

    for (const auto& w : workouts) {
        if (w.muscleGroup == group) {
            filteredWorkouts.push_back(w);
            std::cout << filteredWorkouts.size() << ". " << w.name << " | Difficulty: " << w.difficulty
                      << " | Equipment: " << w.equipment << "\n";
        }
    }

    if (filteredWorkouts.empty()) {
        std::cout << "No workouts found for that muscle group.\n";
        return;
    }

    int selection;
    std::cout << "\nEnter the number of a workout you'd like to confirm: ";
    std::cin >> selection;

    if (selection >= 1 && selection <= filteredWorkouts.size()) {
        std::cout << "You selected: " << filteredWorkouts[selection - 1].name << " — Let's get to work!\n";
    } else {
        std::cout << "Invalid selection.\n";
    }
}

// Display a random workout
void randomWorkout() {
    std::vector<Workout> workouts = getAllWorkouts();
    std::srand(static_cast<unsigned int>(std::time(0)));
    int index = std::rand() % workouts.size();
    const Workout& w = workouts[index];

    std::cout << "\nRandom Workout:\n";
    std::cout << "- " << w.name << " | " << w.muscleGroup << " | " << w.difficulty << " | " << w.equipment << "\n";
}
