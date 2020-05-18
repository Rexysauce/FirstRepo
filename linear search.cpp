#include <iostream>

using namespace std;

int linearSearch(const int arr[], int size, int value);

int main()
{
	cout << "This is a program used to search through a 1 dimentional array" << endl;
	const int SIZE = 5;
	int tests[SIZE] = { 87,75,98,100,82 };
	int results;

	results = linearSearch(tests, SIZE, 100);

	//if the linear search doesnt find 100, -1 is returned
	if (results == -1)
	{
		cout << "You did not score a 100";
	}
	else
	{
		cout << "You earned a 100 on the test";
		cout << (results + 1) << endl;
	}

	return 0;
}

int linearSearch(const int arr[], int size, int value)
{
	// Setup of the linear function
	int index = 0;
	int position = -1;
	bool found = false; // will be set to true if the condition is met.

	while (index < size && !found)
	{
		if (arr[index] == value)
		{
			found = true;
			position = index;
		}
		index++;
	}
	return position;

}