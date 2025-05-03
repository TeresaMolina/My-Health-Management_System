// workouts.h - Ruben
#ifndef WORKOUTS_H
#define WORKOUTS_H

#include <string>
#include <vector>

struct Workout {
    std::string name;
    std::string muscleGroup;
    std::string difficulty;
    std::string equipment;
};

void suggestWorkouts();
void randomWorkout();

#endif
