#pragma once

#include <string>
#include <iostream>

struct Vehicle
{
    Vehicle(const std::string& n);
    virtual ~Vehicle();
    virtual void setSpeed(int s);
    virtual void tryToEvade();
protected:
    int speed = 0;
    std::string name;
private:
    friend struct HighwayPatrol;
};
