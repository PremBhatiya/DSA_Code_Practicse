#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"enter a number";
    cin>>number;
    ///checking for odd or even
    number%2==0?cout<<"even":cout<<"odd";
    return 0;
}