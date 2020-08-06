#include <iostream>
using namespace std;
int main()
{
	long long int temp1=0, temp2=1,temp3=0,num;
	cin >> num;
	if (num == 0)
		cout << "0";
	else if (num == 1)
		cout << "1";
	else {
		for (int i = 0; i < num - 1; i++)
		{
			temp3 = temp1 + temp2;
			temp1 = temp2;
			temp2 = temp3;
		}
		cout << temp3;
	}
	return 0;
}