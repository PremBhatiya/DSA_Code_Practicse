#include<iostream>
using namespace std;
int get_sum(int n)
{
    if(n==0)
    return 0;
    return n+get_sum(n-1);
}
int main()
{
    int n=5;
    int p=get_sum(n);
    cout<<"sum:"<<p;
    return 0;
}