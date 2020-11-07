#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std

class Friends 
{
    private:
        int friendStrength;
        string userName;

    public:
        Friends ();
        Friends (int strength, string user) { friendStrength = strength, userName.assign(user); }
        int getFriendStrength() { return friendStrength; };
        void setFriendStrength(int strength);
};