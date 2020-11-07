#pragma once
#include <iostream>
#include <string>
#include <Profile.h>

using namespace std;

class User {
    string email;
    string password;
    string userName;
    Profile profile;   // can u take a look at post.h and post.cpp its done
    bool isLoggendIn;
    public: 
    User();
    User(string email, string password, string userName );
    
    const string& getEmail() const { return email;}
    const string& getPassword() const { return password;}
    const string& getUserName () const { return userName;}
    const Profile& getProfile () const {return profile;}

    void setEmail(string email){ this->email.assign(email);}
    void setPassword(string password) { this->password.assign(password);}
    void setUserName(string username){ userName.assign(username);}

};