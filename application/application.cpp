#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	map<string,vector<int>>dictionary;
	ifstream input("lorem.txt");
	if (input.is_open())
	{
		string word;
		int line_number = 1;
		while (getline(input, word))
		{
			if (dictionary.find(word)==dictionary.end())
			{
				dictionary.insert({ word, { line_number } });
			}
			else
			{
				dictionary[word].push_back(line_number);
			}
			++line_number;
		}
	}
	
	string tmp;
	cout << "Chose a word: " << endl;
	cin >> tmp;
	cout << "This word " << tmp << endl;
	for (int i = 0; i < dictionary[tmp].size(); i++)
	{
		cout << dictionary[tmp][i] << endl;
	}
	
	return 0;
}