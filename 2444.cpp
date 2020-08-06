#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		for (int j = 0; j < (T - i - 1); j++)
			cout << " ";
		for (int k = 0; k < (i + 1) * 2 - 1; k++)
			cout << "*";
		cout << "\n";
	}
	for (int i = 0; i < T - 1; i++)
	{
		for (int j = 0; j < i + 1; j++)
			cout << " ";
		for (int j = 0; j < (T - 1 - i) * 2 - 1; j++)
			cout << "*";
		cout << "\n";
	}
	return 0;
}