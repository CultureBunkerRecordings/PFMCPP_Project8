#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string s): Vehicle(s)
{
    
}

SemiTruck::~SemiTruck()
{
    
}

void SemiTruck::turnOnRadio()
{
    std::cout << name << ": radio on.. obla dee obla da life goes on.." << std::endl;
}

void SemiTruck::stop()
{
    setSpeed(0);
    std::cout << name <<"I only had a few ales.." << std::endl;

}
