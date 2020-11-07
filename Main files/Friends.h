#include <iostream>
#include <string>
#include <vector>

class Friends {

    struct Friend {
        int friendStrength;
        string userName;
    }

    vector <Friend> Friends;

    public:
    int getFriendStrength() { return friendStrength; };
    void setFriendStrength(int );
    void increaseFriendStrength();

}