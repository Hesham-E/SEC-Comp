#pragma once
#include <iostream> 
#include <string>
#include <vector>

#include "Friends.h"
#include "Post.h"
#include "Network.h"

using namespace std;

class Profile
{
private:
    struct DateofBirth {
        int day;
        int month;
        int year;
    };
    
    struct Interest
    {
        bool soccer;
        bool volleyball;
        bool netflix;
        bool photography;
        bool study;
    };
    
    string name;
    string location;
    string bio;
    
    DateofBirth birth;
    Interest interest;
    
    vector <Post> posts;
    vector <Friends> friends;
    vector <Friends> suggestedFriends;
    
    Network* net;

public:
    Profile();
    Profile(string name, string location, string bio, DateofBirth birth0, Interest interest0, Network* net0 );
    
    void setName(string s) { name.assign(s); }
    void setLocation(string s) { location.assign(s); }
    void setBio(string s) { bio.assign(s); }
    void setBirth(int d, int m, int y) { birth.day = d, birth.month = m, birth.year = y; }
    void setInterest(bool b0, bool b1, bool b2, bool b3, bool b4) { interest.soccer = b0, interest.volleyball = b1, interest.netflix = b2, interest.photography = b3, interest.study = b4; }
    void setNetwork(Network* net0) { net = net0; };
    
    const string getName() const { return name; }
    const string getLocation() const { return location; }
    const string getBio() const { return bio; }
    const DateofBirth getBirth() const { return birth; }
    const Interest getInterest() const { return interest; }
    
    void populateSuggestedFriendsList();
    Friends compareProfiles(Profile P);
};
