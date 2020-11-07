#include <iostream>
#include <string>
#include <vector>

#include "Friends.h"
#include "Post.h"

sing namespace std;


#ifndef FLIGHT
#define FLIGHT

class Profile {
private:
    
    struct DateofBirth {
        int day;
        int month;
        int year;
    };
    
    struct Interests
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
    Interst interest;
    
    vector <Post> P;
    vector <Friends> P;
    
    Network& net;
    
public:
    Profile();
    Profile(string name, string location, string bio, int day, int month, int year, bool soccer, bool volleyball, bool netflix, bool photography, bool study);
    
    void setName(string s) { name.assign(s); }
    void setLocation(string s) { location.assign(s); }
    void setBio(string s) { bio.assign(s); }
    void setBirth(int d, int m, int y) { birth.day = d, birth.month = m, birth.year = y; }
    void setInterest(bool b0, bool b1, bool b2, bool b3, bool b4) { interest.soccer = b0, interest.volleyball = b1, interest.netflix = b2, interest.photography = b3, interest.study = b4; }
    
    string getName() const;
    string getLocation() const;
    string getBio() const;
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    bool getSoccer() const;
    bool getVolleyball() const;
    bool getNetflix() const;
    bool getPhotography() const;
    bool getStudy() const;
    
};


#endif
