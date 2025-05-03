cmake_minimum_required(VERSION 3.10)
project(HealthApp)

# Use C++17 standard
set(CMAKE_CXX_STANDARD 17)

# Add source files
set(SOURCES
    main.cpp
    Authentication/authy.cpp
    Calorie_Tracker/calorie_tracker.cpp
    Meal_Plans/meal_plans.cpp
    Workouts/workouts.cpp
)

# Define executable
add_executable(HealthApp ${SOURCES})

# Link OpenSSL
find_package(OpenSSL REQUIRED)
target_link_libraries(HealthApp OpenSSL::SSL OpenSSL::Crypto)

# Include directories
include_directories(
    Authentication
    Calorie_Tracker
    Meal_Plans
    Workouts
)