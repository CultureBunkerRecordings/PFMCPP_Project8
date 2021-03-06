#pragma once
#include "Vehicle.h"
#include <iostream>

struct Car : public Vehicle
{
    Car(const std::string& s);
    Car(const Car&) = default;
    Car& operator=(const Car&) = default;
    
    void closeWindows();

    void tryToEvade();
};
