#include <iostream>
using namespace std;
int main()
{
	long fix, initial, price;
	cin >> fix >> initial >> price;
	if (initial >= price)
		cout << "-1";
	else {
		long num = fix / (price - initial);
		num++;
		cout << num;
	}
	return 0;
}