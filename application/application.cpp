#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int>* input)
{
	for (int i = 0; i < input->size(); i++)
	{
		cout << input->at(i)<<endl;
	}
}

void printVector2(vector<int>& input)
{
	for (int i = 0; i < input.size(); i++)
	{
		cout << input[i] << endl;
	}
}

int main()
{
	int size;
	cout << "Provide a size for your array: ";
	cin >> size;
	vector<int>numbers;

	for (int i = 0; i < size; i++)
	{
		numbers.push_back(i);
	}
	
	printVector2(numbers);

	return 0;
}