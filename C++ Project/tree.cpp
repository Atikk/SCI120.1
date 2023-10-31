#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <cstdlib>

using namespace std;

int const NL = 26;

string printTreeLine(int width, char tc, char bgc, int totalWidth){


	string treeline;
	treeline.assign(width,tc);
	int margin = (totalWidth - width) / 2;
	string back;
	back.assign(margin, bgc);
	return back+ treeline+ back;
};

int tree(){
	char bgc;
	cout << "Enter a character";
	cin.get(bgc);
	cin.ignore(16,'\n');

	cout << "Enter a short greeting";
	string greeting;
	getline(cin,greeting);
	
	int margin = 4;
	int lineWidth = 2 * margin + greeting.length();

	cout << printTreeLine(1, bgc, bgc, lineWidth)<<endl;
	int i = -1;
	
		cout << printTreeLine(i += 2, 'A' + rand() % NL, bgc, lineWidth)<<'\n';
		cout << printTreeLine(i += 2, 'A' + rand() % NL, bgc, lineWidth) << '\n';
		cout << printTreeLine(i += 2, 'A' + rand() % NL, bgc, lineWidth) << '\n';
		cout << printTreeLine(i += 2, 'A' + rand() % NL, bgc, lineWidth) << '\n';
		cout << printTreeLine(i += 2, 'A' + rand() % NL, bgc, lineWidth) << '\n';
		cout << printTreeLine(1, 'I', bgc, lineWidth) << '\n';
		cout << printTreeLine(1, 'I', bgc, lineWidth) << '\n';
	

	string back;
	back.assign(margin, bgc);
	string base = back + greeting + back;
	cout << base << '\n';
	return 0;
};