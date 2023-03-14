#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    int prevSUm=sum(n-1);
    return n+prevSUm;
}
int main()
{
    int n=4;
    cout<<sum(n);
    return 0;
}