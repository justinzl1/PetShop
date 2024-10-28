//
// Created by Justin Lee on 10/27/24.
//

#include "pet.hpp"
#include "cat.hpp"
#include "dog.hpp"

using namespace std;

Pet::~Pet() {}

Pet::Pet()
{
    name = "";
    weight = 0;
}

Pet::Pet(string name, float weight)
{
  this->name = name;
  this->weight = weight;
}

Cat::Cat(string nm, float weight):Pet(nm, weight) {
    multiplier = 1.5;
}

Dog::Dog(string nm, float weight):Pet(nm, weight) {
    multiplier = 2;
}