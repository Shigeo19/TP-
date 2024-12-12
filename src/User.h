#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
private:
	//attributs
    string username;
    string password;
    string firstName;
    string lastName;
    string email;
    string address;
    string session;

public:
    //Méthodes
    // Constructeur avec arguments
    User(string username, string password, string firstName, string lastName,
         string email, string address, string session);

    // Accesseurs
    string getEmail();
    string getHiddenEmail();
    void setPassword(string password);
    string getPassword();
    string printUserDetails();
};

#endif
