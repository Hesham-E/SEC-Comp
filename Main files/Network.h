#pragma once
#include <iostream>
#include <cmath>
#include <vector>
#include "User.h"
#include "string.h"
using namespace std;

class Network {
    private:
        vector <User> Users;

    public:
        Network();
        const vector <User>& getUsers() const {return Users;}
};