#include <iostream>
#include <string>
#include <vector>
#include "pet.hpp"

using namespace std;

int main() {
    vector<Pet*> pvec;
    Pet* p1 = new Pet("Joe", 5);
    Pet* p2 = new Pet("Bob", 10);

    pvec.push_back(p1);
    pvec.push_back(p2);
    float total_fee = 0;
    for(int i = 0; i < pvec.size(); i++)
    {
        cout << pvec[i]->getName() << ' ' << pvec[i]->calculateFee() << endl;
        total_fee = total_fee + pvec[i]->CalculateFee();
    }
    cout << "total licensing fee = " << total_fee << endl;
    return 0;
}
