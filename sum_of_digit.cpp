#include<iostream>
using namespace std;
int get_sum(int num)
{
    int temp=num;
    int sum=0;
    int rem,last;
    while(temp>0)
    {
        last=temp%10;
        sum=sum+last;
        temp=temp/10;
    }
    return sum;
}
int main()
{
    int digit=253;
    int result=get_sum(digit);
    cout<<"result:"<<result<<" ";
    return 0;
}