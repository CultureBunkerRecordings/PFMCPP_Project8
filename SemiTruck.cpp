#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string s): Vehicle(s)
{
    
}

void SemiTruck::pullOver()
{
        setSpeed(0);
        std::cout << "I only had a few ales..";
}
