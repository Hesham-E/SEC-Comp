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
    net = NULL;
    
}

Profile::Profile(string name, string location, string bio, DateofBirth birth0, Interest interest0, Network net0)
{
    name.assign(name);
    location.assign(location);
    bio.assign(bio);
    birth = birth0;
    interest
    net = net0; //Not sure if this is right
}
