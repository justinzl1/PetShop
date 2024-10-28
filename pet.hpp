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
    Pet(string nm, int weight);
    virtual ~Pet();
    string getName(){ return name;}
    int getWeight(){ return weight;}
    float getMultiplier();
    virtual float calculateFee() = 0;
    void setName(string nm){ name = nm;}
    void setWeight(int w){ weight = w;}
    void setMultiplier(float m){ multiplier = m;}
private:
    string name;
    int weight;
    float multiplier;
};
#endif //PET_HPP
