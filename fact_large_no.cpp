#include<iostream>
using namespace std;
void fact(int n)
{
    int result=1;
    for(int i=1;i<=n;i++)
    {
        result=result*i;
    }
    cout<<"output is:"<<result;
}
int main()
{
    double n;
    cout<<"enter number to find fact"<<endl;
    cin>>n;
    fact(n);
}