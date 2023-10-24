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
};