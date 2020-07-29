#include <iostream>
using namespace std;
bool divisor(int num)
{
    int count=0;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
            count++;
    }
    if(count%2==1)
        return true;
    else
        return false;
}
int main()
{
    int M,N,sum=0;
    cin>>M;
    cin>>N;
    int min=N+1;
    for(int i=N;i>=M;i--)
    {
        if(divisor(i)==true)
        {
            sum+=i;
            min=i;
        }
    }
    if(min==N+1)
        cout<<"-1"<<endl;
    else{
        cout<<sum<<endl;
        cout<<min<<endl;
    }
    return 0;
}