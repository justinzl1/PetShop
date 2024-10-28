//
// Created by Justin Lee on 10/27/24.
//


#ifndef CAT_HPP
#define CAT_HPP

#include "pet.hpp"
#include <iostream>

class Cat : public Pet
{
public:
    Cat(string nm, float weight);
    virtual float calculateFee() {
        return weight * multiplier;
    }

private:
    float multiplier;




};

#endif //CAT_HPP
