#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    int prefact=fact(n-1);
    return n* prefact;
}
int main()
{
    int n=4;
    cout<<fact(n);
    return 0;
}