#include <iostream>
#include <string>

class User {
    string email = "";
    string passowrd = "";
    string userName = "";
    // Profile Profile; 
    bool isLoggendIn = true;
    public: 
    User();
    void changeProfile();
};