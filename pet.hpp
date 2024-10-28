//
// Created by Justin Lee on 10/27/24.
//

#ifndef PET_HPP
#define PET_HPP
#include <iostream>
#include <string>


using namespace std;

class Pet {
public:
    Pet();
    Pet(string nm, float weight);
    virtual ~Pet();
    string getName(){ return name;}
    float getWeight(){ return weight;}
    float getMultiplier();
    virtual float calculateFee() = 0;
    void setName(string nm){ name = nm;}
    void setWeight(float w){ weight = w;}
protected:
    string name;
    float weight;
};
#endif //PET_HPP
