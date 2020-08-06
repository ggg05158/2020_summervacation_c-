#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		for (int j = 0; j < i; j++)
			cout << " ";
		for (int j = 0; j < (T - i) * 2 - 1; j++)
			cout << "*";
		cout << "\n";
	}
	return 0;
}