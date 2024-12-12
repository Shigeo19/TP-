#include "User.h"
#include <iostream>
using namespace std;

// Constructeur
User::User(string username, string password, string firstName, string lastName,
           string email, string address, string session)
    : username(username), firstName(firstName), lastName(lastName),
      email(email), address(address), session(session) {
    setPassword(password); // Validation lors de l'initialisation
}

// getEmail() : retourne l'e-mail de l'utilisateur
string User::getEmail() {
    return email;
}

// getHiddenEmail() : retourne l'email partiellement masqué
string User::getHiddenEmail() {
    size_t atPos = email.find('@');
    if (atPos == string::npos || atPos < 4)
    {
        return "Email invalide";
    }
    string hiddenEmail = email.substr(0, 4) + "********" + email.substr(atPos - 4);
    return hiddenEmail;
}

// setPassword(...) : définit un mot de passe en le validant
void User::setPassword(string newPassword) {
    bool hasUppercase = false, hasLowercase = false, hasDigit = false, hasSpecial = false;

    for (char c : newPassword) {
        if (isupper(c)) hasUppercase = true;
        if (islower(c)) hasLowercase = true;
        if (isdigit(c)) hasDigit = true;
        if (!isalnum(c)) hasSpecial = true;
    }

    if (newPassword.length() >= 8 && hasUppercase && hasLowercase && hasDigit && hasSpecial)
    {
        password = newPassword;
    }

    else
    {
        cout << "Mot de passe invalide. Il doit contenir au moins 8 caractères, "
             << "une majuscule, une minuscule, un chiffre, et un caractère spécial." << endl;
    }
}

// getPassword() : retourne le mot de passe de l'utilisateur
string User::getPassword() {
    return password;
}

// printUserDetails() : affiche les informations personnelles de l'utilisateur
string User::printUserDetails() {
    cout << "Username: " << username << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Email: " << email << endl;
    cout << "Address: " << address << endl;
    cout << "Session: " << session << endl;
}
