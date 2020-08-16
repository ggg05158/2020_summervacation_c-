#include <iostream>
using namespace std;
class inform {
public:
	int layer;
	int spare;
};
inform get_inform(int n){
	inform temp;
	int count = 1;
	while (1)
	{
		n -= count;
		if (n <= 0)
			break;
		count += 1;
	}
	temp.layer = count;
	temp.spare = n + count-1;
	return temp;
}
void print_div(int l, int s)
{
	if (l % 2 == 0)
	{
		cout << s+1<<"/";
		cout << l - s;
	}
	else
	{
		cout << l - s<<"/";
		cout << s+1;
	}
}
int main()
{
	int num;
	cin >> num;
	print_div(get_inform(num).layer, get_inform(num).spare);
	return 0;
}