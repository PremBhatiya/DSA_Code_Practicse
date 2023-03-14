#include<iostream>
using namespace std;
int power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    int prevpower=power(n,p-1);
    return n*prevpower;
}
int main()
{
    int n=4;
    int p=3;
    cout<<power(n,p);
}