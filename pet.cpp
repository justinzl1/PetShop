//
// Created by Justin Lee on 10/27/24.
//

#include "pet.hpp"

using namespace std;

Pet::Pet()
{
    name = "";
    weight = 0;
}

Pet::Pet(string name, int weight)
{
  this->name = name;
  this->weight = weight;
}