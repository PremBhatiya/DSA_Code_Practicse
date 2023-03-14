#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    num=1234;
    cout<<"number is"<<num<<endl;
    while(num!=0)
    {
        sum+=num%10;
        num=num/10;
    }
    cout<<"sum of digit"<<sum;

    return 0;
}