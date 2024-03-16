#pragma once
#include "IODevice.h"
class Output :
    public IODevice
{
private:
    string n;
    string m;
public:
    Output(const char* name1, string model1, double price1, Country country1, string IODevice_function1, string IODevice_type1, int n1, int m1) :IODevice(name1, model1, price1, country1, IODevice_function1, IODevice_type1) {
        n = n1;
        m = m1;
    };
    Output(const Output& other) :IODevice(other) {
        n = other.n;
        m = other.m;
    };


    virtual void display()const;
    string get_Output_function()const;
    string get_Output_type()const;
};

