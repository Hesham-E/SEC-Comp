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
    void getPassword(string password);
    void getUserName(string username);

    void changeProfile();
};