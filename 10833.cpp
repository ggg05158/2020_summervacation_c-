#include <iostream>
using namespace std;
class giveApple {
public:	
	int apple;
	int student;
};
int main()
{
	int T,sum=0;
	cin >> T;
	giveApple list;
	for (int i = 0; i < T; i++)
	{
		cin >> list.student >> list.apple;
		sum += list.apple % list.student;
	}
	cout << sum;
}