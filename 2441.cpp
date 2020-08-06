#include <iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	for (int i = 1; i < num + 1; i++)
	{
		for (int k = 0; k < i - 1; k++)
			cout << " ";
		for (int j = 0; j <= (num - i); j++)
			cout << "*";
		cout << "\n";
	}
	return 0;
}