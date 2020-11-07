#include <iostream>
#include <string>
#include <vector>

#include "Friends.h"
#include "Post.h"
#include "Profile.h"
#include "Network.h"


using namespace std;

Profile::Profile()
{
    name.assign("\0");
    location.assign("\0");
    bio.assign("\0");
    setBirth(0, 0, 0);
    setInterest(0, 0, 0, 0, 0);
    posts.resize(0);
    friends.resize(0);
    suggestedFriends.resize(0);
    
}

Profile::Profile(string name, string location, string bio, DateofBirth birth0, Interest interest0, Network* net0)
{
    name.assign(name);
    location.assign(location);
    bio.assign(bio);
    birth = birth0;
    interest = interest0;
    net = net0;//Not sure if this is right
}

void Profile::populateSuggestedFriendsList()
{
    const int usersLength = net->getUsers().size();

    vector <User> profileList = net->getUsers();
    
    for(int i =0; i< usersLength; i++)
    {
        Profile profile1 = profileList.at(0).getProfile();
        
        
    }
}

Friends Profile::compareProfiles(Profile P)
{
    Friends friend;
    friend.setUsername 
}