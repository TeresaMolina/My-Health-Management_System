// workouts.h - Ruben
#ifndef WORKOUTS_H
#define WORKOUTS_H

#include <string>
#include <vector>
using namespace std;

struct Workout {
  string name;
  string muscleGroup;
  string difficulty;
  string equipment;
};

void suggestWorkouts();
void randomWorkout();

#endif
