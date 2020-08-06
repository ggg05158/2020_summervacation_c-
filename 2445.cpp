#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		for (int j = 0; j < i; j++)
			cout << "*";
		for (int j = 0; j < (T - i) * 2; j++)
			cout << " ";
		for (int j = 0; j < i; j++)
			cout << "*";
		cout << "\n";
	}
	for (int i = 1; i <= T - 1; i++)
	{
		for (int j = 0; j < T - i; j++)
			cout<<"*";
		for (int j = 0; j < i * 2; j++)
			cout << " ";
		for (int j = 0; j < T - i; j++)
			cout << "*";
		cout << "\n";
	}
	return 0;
}