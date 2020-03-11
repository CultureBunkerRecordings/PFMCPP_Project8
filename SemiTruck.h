#pragma once
#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string s): Vehicle(s){};
    void pullOver()
    {
        setSpeed(0);
        std::cout << "I've only had a few ales.."
    }
};
