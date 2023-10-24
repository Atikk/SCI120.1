#include <iostream>;
using namespace std;

struct Date {
	char weekdayLetter;
	string monthName;
	int dayOfMonth;
	int year;
};
void date() {

	Date date = { 't',"October",03,2023 };
	int x = sizeof(date);
	cout << "the date is: " << date.monthName << " " << date.dayOfMonth << " " << date.year << endl;
	cout << "your day code is: " << date.weekdayLetter;
}