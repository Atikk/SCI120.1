/* 
Excercise 1

using namespace std;

int Exe1()
{
	cout << "Most people are not just comfortable with their ignorance,\n but hostile to anyone who points it out.\n - Plato"
		;
	return 0;
} 
*/

/* Exercise 2
 #include <iostream>
 #include <string>
 using namespace std;


 int main() {
 int years = 2; 
 string label = "time";
 char unit = 'y';

 cout << label << " " << "=" << " " << years << unit; 
 return 0;
}
*/

/* Exercise 3
#include <iostream>
#include <string>

using namespace std;

int Exe3()
{
	cout << "What is your name?";

	string name;
	getline(cin, name);

	cout << "Hello " << name << " it's very nice to meet you!" << endl;

	return 0;
}
*/

/*Exercise 4

#include <iostream>

using namespace std;

int Exe4()
{
	double x1 = 1.5;
	double y1 = 3.4;
	double x2 = 6.5;
	double y2 = 25;
	double slope;
	double intercept;
	slope = (y2 - y1) / (x2 - x1);
	intercept = (y1 * x2 - x1 * y2) / (x2 - x1);
	cout << slope << intercept<<endl;
	return 0;
}
*/

/*Exercise 5

#include <iostream>
using namespace std;


int Exe5()
{
	double x;
	cout << "Need a value less than 1" << endl;
	cin >> x;
	if (fabs(x) > 1) {
		cout << "that number is not valid" << endl;
	}
	else {
		x = (180 / 3.1415927) * (acos(x));
		cout << x << endl;
	}
	return 0;
}
*/

/*Exercise 6

#include <iostream>

using namespace std;


int Exe6()
{
	double x;
	cin >> x;
	int n = 1;
	while (n <= 50) {
		x = x + pow(-1, (n + 1)) * pow(x, n) / n;
		cout << x;
		n = n + 1;
	}
	cout << x;
	return 0;
}
*/

/* 
Exercise 7

#include <iostream>
#include <vector>

using namespace std;


int Exe7()
{

	vector<string> wordList;
	string word;
	cout << "Enter a sentence and type [space] . to end\n";
	cin >> word;
	// 4
	while (word != ".")
	{
		wordList.push_back(word);

		cin >> word;
	}
	//5
	while (!wordList.empty()) {

		word = wordList.back();
		wordList.pop_back();
		int nc = word.length();
		while (nc > 0) {
			nc = nc - 1;
			cout << word[nc];
		}
		cout << " ";
	}
	cout << endl;
	return 0;
};
*/

/*
#include <iostream>
using namespace std;

struct Cards {
	int rank; 
	string suit; 
};

int Exe8()
{
	Cards card;
	card = { 9,"Clubs" };
	cout << card.rank;
	cout << card.suit;
	return 0;
};*/

/*
#include <iostream>

using namespace std;

double cylinderVolume(double h, double r) {
	double x = 3.14 * r * r;
	return r, h, x;
}
double getDouble(string label) {
	cout << label << " ";
	double v;
	cin >> v; // in from console
	return v;
}
int Exe9() {
	cout << "Enter cylinder:";
	double heigh;
	double radius;
	heigh = getDouble("height = ");
	radius = getDouble("radius = ");
	cout << "Cylinder volume = ";
	cout << cylinderVolume(heigh, radius);
	return 0;
};
*/

/*
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int Exe10() {

	int x = 1;
	cout << "Enter a file name:\n";
	string dataFile;
	getline(cin, dataFile);

	ofstream fileOut;

	fileOut.open(dataFile);

	while (x <= 10) {
		fileOut << x << " ";
		x = x + 1;
		cout << x;
	};
	fileOut.close();
	return 0;
};
*/

/*
#include <iostream>

using namespace std;

int Exe11() {
	double x;
	cout << " Enter a number: ";
	cin >> x;
	double* p = nullptr;

	if (x > 0) { x = sqrt(x); p = &x; }
	if (p != nullptr) {
		cout << "squareroot is " << *p << endl;
	}
	else { cout << "value is invalid"; }
	return 0;
}
*/