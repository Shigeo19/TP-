#include <iostream>
using namespace std;

class UserDetails {
	public :
		string encryptPassword(string password, int key);
		string decryptPassword(string cryptedPassword, int key);
};

