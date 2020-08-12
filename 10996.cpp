#include <iostream>
using namespace std;
int main()
{
	int num,a,b;
	cin >> num;
	if (num % 2 == 0) {
		a = num / 2;
		b = num / 2;
	}
	else {
		a = (num + 1) / 2;
		b = num / 2;
	}
	for (int j = 0; j < num; j++) {
		for (int i = 0; i < a; i++)
			cout << "* ";
		cout << "\n";
		for (int i = 0; i < b; i++)
			cout << " *";
		cout << "\n";
	}
	return 0;
}