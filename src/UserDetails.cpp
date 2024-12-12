#include "UserDetails.h"
#include <iostream>
using namespace std;

string UserDetails::encryptPassword(string password, int key)
{
	string encryptedPassword;

	for(int i = 0; i < password.length(); i++)
	{
		int temp = password.at(i);
		temp += key;
		char c = temp;
		encryptedPassword.append(1,c);
	}
	return encryptedPassword;
}

string UserDetails::decryptPassword(string cryptedPassword, int key)
{
	string decryptedPassword;

	for (int i = 0; i < cryptedPassword.length(); i++)
	{
		int temp = cryptedPassword.at(i);
		temp -= key;
		char c = temp;
		decryptedPassword.append(1,c);
	}
	return decryptedPassword;
}



