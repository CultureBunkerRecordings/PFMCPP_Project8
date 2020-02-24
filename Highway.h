#pragma once
#include <vector>
#include <algorithm>

struct Vehicle;

struct Highway
{
    void changeSpeed(int newSpeed);
    void addVehicle(Vehicle* v);
    void removeVehicle(Vehicle* v);
    void addVehicleInternal(Vehicle* v);
    void removeVehicleInternal(Vehicle* v);
    std::vector<Vehicle*> vehicles;
    int speedLimit = 65;
    friend struct HighwayPatrol;
};
