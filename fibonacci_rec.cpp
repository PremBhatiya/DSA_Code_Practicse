// 0,1,1,2,3,5,8,13
#include<iostream>
using namespace std;
int fibb(int n)
{
    if(n==0||n==1)
    {
        return n;
    }
    return fibb(n-1)+fibb(n-2);
}
int main()
{ 
    int a=8;
    cout<<fibb(a);
    return 0;
}