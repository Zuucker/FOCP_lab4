#include <iostream>
#include <map>
#include <fstream>
#include <string>
using namespace std;

void record_line(map<string, int>& dictionary, string line)
{
	string delimiter = " ";
	
}

int main()
{
	map<string, int>dictionary;
	ifstream input("lorem.txt");
	if (input.is_open())
	{
		string word;
		while (getline(input, word))
		{
			if (dictionary.find(word)==dictionary.end())
			{
				dictionary.insert({ word,1 });
			}
			else
			{
				dictionary[word]++;
			}
		}
	}
	
	string tmp;
	cout << "Chose a word: " << endl;
	cin >> tmp;
	cout << "This word " << tmp << " appearas "<<dictionary[tmp]<<" times." << endl;

	
	return 0;
}