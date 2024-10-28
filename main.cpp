#include <iostream>
#include <string>
#include <vector>
#include "pet.hpp"
#include "cat.hpp"
#include "dog.hpp"

using namespace std;

int main() {
    vector<Pet*> pvec;
    Cat* p1 = new Cat("Joe", 12);
    Dog* p2 = new Dog("Bob", 65);
    Dog* p3 = new Dog("Stan", 37);

    pvec.push_back(p1);
    pvec.push_back(p2);
    pvec.push_back(p3);
    float total_fee = 0;
    for(int i = 0; i < pvec.size(); i++)
    {
        cout << pvec[i]->getName() << ' ' << pvec[i]->calculateFee() << endl;
        total_fee = total_fee + pvec[i]->calculateFee();
    }
    cout << "total licensing fee = " << total_fee << endl;
    return 0;
}
