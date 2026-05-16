
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1, s2;
	cout << "Enter two strings : ";
	getline(cin, s1);
	getline(cin, s2);
	cout << "Concatenated string : " << s1 + s2;
	
	return 0;
}