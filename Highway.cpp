#include "Highway.h"

#include <cassert>

#include "Vehicle.h"
#include "Car.h"
#include "Motorcycle.h"
#include "SemiTruck.h"

void Highway::changeSpeed(int newSpeed)
{
    speedLimit = newSpeed;
    for( auto* vehicle : vehicles )
    {
        vehicle->setSpeed(speedLimit);
    }
}

void Highway::addVehicleInternal(Vehicle* v)
{
    //assert(false);

    /*
    depending on the derived type, call the member function that doesn't evade the cops. 
    */
    if(auto* vehicle = dynamic_cast<Car*>(v))
    {
        vehicle->closeWindows();
    }
    if (auto* vehicle = dynamic_cast<Motorcycle*>(v))
    {
        vehicle->setSpeed(60);
    }
    if (auto* vehicle = dynamic_cast<SemiTruck*>(v))
    {
        vehicle->pullOver();
    }
}

void Highway::removeVehicleInternal(Vehicle* v)
{
    //assert(false);

    /*
    depending on the derived type, call the member function that tries to evade the cops. 

    trucks pull over, but cars and bikes try to evade!!
    */

    if (auto* vehicle = dynamic_cast<Car*>(v))
    {
        vehicle->tryToEvade();
    }
    if (auto* vehicle = dynamic_cast<Motorcycle*>(v))
    {
        vehicle->tryToEvade();
    }
    if (auto* vehicle = dynamic_cast<SemiTruck*>(v))
    {
        vehicle->pullOver();
    }
}

void Highway::addVehicle(Vehicle* v)
{
    vehicles.push_back(v);
    addVehicleInternal(v);
}
void Highway::removeVehicle(Vehicle* v)
{
    vehicles.erase(std::remove(vehicles.begin(), 
                               vehicles.end(), 
                               v), 
                   vehicles.end());
    removeVehicleInternal(v);
}
