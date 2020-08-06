#include <iostream>
using namespace std;
int max(int n1, int n2)
{
	int div=0;
	for (int i = 1; i <= (n1 > n2 ? n2 : n1); i++) {
		if (n1 % i == 0 && n2 % i == 0)
			div = i;
	}
	return div;
}
int min(int n1, int n2)
{
	int n1d = n1 / max(n1, n2), n2d = n2 / max(n1, n2);
	return max(n1, n2) * n1d * n2d;
}
int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	cout << max(num1, num2) << "\n" << min(num1, num2);
	return 0;
}