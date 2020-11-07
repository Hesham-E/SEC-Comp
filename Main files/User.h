#include <iostream>
#include <string>

using namespace std;

class User {
    string email;
    string password;
    string userName;
    // Profile Profile; 
    bool isLoggendIn;
    public: 
    User();
    User(string email, string password, string userName );
    
    const string& getEmail() const;
    const string& getPassword() const;
    const string& getUserName () const;

    void setEmail(string email);
    void setPassword(string password);
    void setUserName(string username);

    void changeProfile();
};