#include <iostream>
using namespace std;
class testCase{
public:
    int price;
    string name;
};
int main()
{
    int time1,time2,high=0;
    cin>>time1;
    for(int i=0;i<time1;i++)
    {
        cin>>time2;
        testCase *array=new testCase[time2];
        for(int j=0;j<time2;j++)
        {
            cin >>array[j].price>>array[j].name;
            high=(array[high].price>=array[j].price)?high:j;
        }
        cout<<array[high].name;
        delete[] array;
    }
    return 0;  
}