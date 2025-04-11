#include "workouts.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Returns a list of all available workouts
vector<Workout> getAllWorkouts() {
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
    vector<Workout> workouts = getAllWorkouts();
    string group;
    vector<Workout> filteredWorkouts;

    cout << "\nChoose a muscle group:\n";
    cout << "Chest, Back, Legs, Shoulders, Arms, Core\n";
    cout << "Enter your choice: ";
    cin >> group;

    cout << "\nWorkout Suggestions for " << group << ":\n";

    for (const auto& w : workouts) {
        if (w.muscleGroup == group) {
            filteredWorkouts.push_back(w);
            cout << filteredWorkouts.size() << ". " << w.name << " | Difficulty: " << w.difficulty
                 << " | Equipment: " << w.equipment << "\n";
        }
    }

    if (filteredWorkouts.empty()) {
        cout << "No workouts found for that muscle group.\n";
        return;
    }

    // Let user pick a workout (optional final confirmation)
    int selection;
    cout << "\nEnter the number of a workout you'd like to confirm: ";
    cin >> selection;

    if (selection >= 1 && selection <= filteredWorkouts.size()) {
        cout << "You selected: " << filteredWorkouts[selection - 1].name << " — Let's get to work!\n";
    } else {
        cout << "Invalid selection.\n";
    }
}

// Display a random workout
void randomWorkout() {
    vector<Workout> workouts = getAllWorkouts();
    srand(static_cast<unsigned int>(time(0)));
    int index = rand() % workouts.size();
    const Workout& w = workouts[index];

    cout << "\nRandom Workout:\n";
    cout << "- " << w.name << " | " << w.muscleGroup << " | " << w.difficulty << " | " << w.equipment << "\n";
}
