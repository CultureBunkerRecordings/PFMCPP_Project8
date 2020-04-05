#pragma once 

#include "Vehicle.h"
#include "Highway.h"

struct HighwayPatrol : public Vehicle 
{
    HighwayPatrol();
    HighwayPatrol(const HighwayPatrol&) = default;
    HighwayPatrol& operator=(const HighwayPatrol&) = default;
    virtual ~HighwayPatrol();
    void scanHighway(Highway* h);

    void pullOver( Vehicle* v, bool willArrest, Highway* h );
    
};
