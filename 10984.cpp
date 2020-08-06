#include <iostream>
using namespace std;
class grade {
public:	
	int num;
	float rank;
};
int main()
{
	int T1,T2,num;
	grade student;
	float rank;
	cin >> T1;
	for (int i = 0; i < T1; i++)
	{
		num = 0;
		rank = 0;
		cin >>T2;
		for (int k = 0; k < T2; k++)
		{
			cin >> student.num >> student.rank;
			num += student.num;
			rank += student.num * student.rank;
		}
		cout << fixed;
		cout.precision(1);
		cout << num << " " << rank / num<<"\n";
	}
	return 0;
}