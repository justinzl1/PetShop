//
// Created by Justin Lee on 10/27/24.
//

#ifndef DOG_HPP
#define DOG_HPP

#include "pet.hpp"
#include <iostream>

class Dog: public Pet {
public:
    Dog(string nm, float weight);
    virtual float calculateFee() {
        return weight * multiplier;
    }


private:
    float multiplier = 2;
};

#endif //DOG_HPP
