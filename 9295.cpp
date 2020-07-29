#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	int T;
	srand((int)time(0));
	cout << "횟수를 입력하시오";
	cin >> T;
	for (int i=0; i < T; i++)
	{
		int a, b;
		a = rand() % 6 + 1;
		b = rand() % 6 + 1;
		cout << "a:" << a << "\tb:" << b << endl;
		cout << "case" << i + 1 << " : " << a + b<<endl;
	}
	return 0;
}