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