#include <iostream>
using namespace std;
int main()
{
	int price,book;
	cin >> price;
	for (int i = 0; i < 9; i++) {
		cin >> book;
		price -= book;
	}
	cout << price;
	return 0;
}