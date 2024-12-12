#include <iostream>
#include "UserDetails.h"
using namespace std;

int main() {
	UserDetails userDetails;
	string password = "sudinpt";

	int key = 5;

	string ecrypPwd = userDetails.encryptPassword(password, key);
	string decrypPwd = userDetails.decryptPassword(ecrypPwd, key);

	cout << decrypPwd << endl;

	return 0;
}
