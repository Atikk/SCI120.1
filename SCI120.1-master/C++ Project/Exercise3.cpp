#include <iostream>
#include <string>

using namespace std;

int Exe3()
{
	cout << "What is your name?";

	string name;
	getline(cin, name);

	cout << "Hello " << name << " it's very nice to meet you!"<<endl;

	return 0;
}