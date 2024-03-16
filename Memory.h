#pragma once
#include "Hardware.h"
class Memory :
    public hardware
{
private:
    double memory_size;
    string memory_type;
    string memory_sizebyte;

protected:
    virtual void display_header()const;
    virtual void display_info()const;
public:
    Memory(const char* name1, string model1, double price1, Country country1, double memory_size1, string memory_type1, string sizebyte1) :hardware(name1, model1, price1, country1) {
        memory_size = memory_size1;
        memory_type = memory_type1;
        memory_sizebyte = sizebyte1;
    };
    Memory(const Memory& other) :hardware(other) {
        memory_size = other.memory_size;
        memory_type = other.memory_type;
        memory_sizebyte = other.memory_sizebyte;
    };


    virtual void display()const;
    string get_memory_type()const;
    double get_memory_size()const;
    string get_memory_sizebyte()const;
};

