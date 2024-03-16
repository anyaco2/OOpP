#pragma once
#include "hardware.h"

class Battery :
    public hardware
{
private:
    double battery_size;
    string battery_type;

protected:
    virtual void display_header()const;
    virtual void display_info()const;
public:
    Battery(const char* name1, string model1, double price1, Country country1, double battery_size1, string battery_type1) :hardware(name1, model1, price1, country1) {
        battery_size = battery_size1;
        battery_type = battery_type1;
    };
    Battery(const Battery& other) :hardware(other) {
        battery_size = other.battery_size;
        battery_type = other.battery_type;
    };


    virtual void display()const;
    double get_battery_size()const;
    string get_battery_type()const;

};

