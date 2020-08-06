#include <iostream>
using namespace std;
class selOption {
public:	
	int num;
	int price;
};
int main()
{
	int T1,T2,price,option;
	cin >> T1;
	selOption opt;
	for (int i = 0; i < T1; i++)
	{
		option = 0;
		cin >> price;
		cin >> T2;
		for (int j = 0; j < T2; j++)
		{
			cin >> opt.num >> opt.price;
			option += (opt.num * opt.price);
		}
		cout << price + option<<"\n";
	}
	return 0;
}