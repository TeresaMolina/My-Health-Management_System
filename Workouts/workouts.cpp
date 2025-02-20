#include "workouts.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void suggestWorkouts()
{
    cout << "\nSelect a muscle group for workout suggestions:\n";
    cout << "1. Chest\n2. Back\n3. Legs\n4. Shoulders\n5. Arms\n6. Core\n";
    cout << "Enter your choice (1-6): ";

    int choice;
    cin >> choice;

    vector<string> suggestions;

    switch (choice)
    {
    case 1: // Chest workouts
        suggestions = {"Push-ups", "Bench Press", "Chest Fly"};
        break;

    case 2: // Back workouts
        suggestions = {"Pull-ups", "Bent Over Rows", "Lat Pulldowns"};
        break;

    case 3: // Leg workouts
        suggestions = {"Squats", "Lunges", "Leg Press"};
        break;

    case 4: // Shoulder workouts
        suggestions = {"Shoulder Press", "Lateral Raises", "Front Raises"};
        break;

    case 5: // Arm workouts
        suggestions = {"Bicep Curls", "Tricep Dips", "Hammer Curls"};
        break;

    case 6: // Core workouts
        suggestions = {"Plank", "Sit-ups", "Russian Twists"};
        break;

    default:
        cout << "Invalid choice. Showing default workouts.\n";
        suggestions = {"Burpees", "Jumping Jacks", "Mountain Climbers"};
        break;
    }

    cout << "\nWorkout Suggestions:\n";
    for (const auto &workout : suggestions)
    {
        cout << "- " << workout << "\n";
    }
}
