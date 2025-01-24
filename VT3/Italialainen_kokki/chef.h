#ifndef CHEF_H
#define CHEF_H

#include <string>
#include <iostream>

using namespace std;

class Chef {

public:
    Chef(string name);
    virtual ~Chef();

    string getName();
    int makeSalad(int ingredients);
    int makeSoup(int ingredients);

protected:
    string chefName;
};

#endif // CHEF_H
