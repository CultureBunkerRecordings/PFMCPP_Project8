#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string s): Vehicle(s)
{
    
}

SemiTruck::~SemiTruck()
{
    
}

void SemiTruck::stop()
{
        setSpeed(0);
        std::cout << "I only had a few ales..";
}
