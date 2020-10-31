#include <iostream>
using namespace std;

int main()
{
	int variable = 6;
	int* ptr;
	ptr = &variable;

	cout << &variable<<endl;
	cout << &ptr << endl;
	ptr = &variable;
	cout << *ptr << endl;

	*ptr = 25;
	cout << variable << endl;

	return 0;
}