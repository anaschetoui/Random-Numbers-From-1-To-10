#include <iostream>
using namespace std;

int RandomNumbers(int from, int to)
{
	return rand() % (from - to + 1) + from;
}

int main()
{
	srand((unsigned)time(NULL));

	cout << RandomNumbers(1, 10) << endl;
	cout << RandomNumbers(1, 10) << endl;
	cout << RandomNumbers(1, 10) << endl;

	return 0;
	
}