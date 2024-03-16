#pragma once
#include "hardware.h"
class IODevice :
    public hardware
{
private:
    string IODevice_function;
    string IODevice_type;
    

protected:
    virtual void display_header()const;
    virtual void display_info()const;
public:
    IODevice(const char* name1, string model1, double price1, Country country1, string IODevice_function1, string IODevice_type1) :hardware(name1, model1, price1, country1) {
        IODevice_function = IODevice_function1;
        IODevice_type = IODevice_type1;
    };
    IODevice(const IODevice& other) :hardware(other) {
        IODevice_function = other.IODevice_function;
        IODevice_type = other.IODevice_type;
    };

    
    virtual void display()const;
    string get_IODevice_function()const;
    string get_IODevice_type()const;

};

