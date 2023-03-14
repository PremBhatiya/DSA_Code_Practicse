#include<iostream>
using namespace std;
int main()
{
    int year;

    year=2000;

    if(year%400==0||(year%100!=0 && year%4==0))
    {
        cout<<"leap year"<<endl;
    }
    else
    {
        cout<<"not learp year"<<endl;
    }

    return 0;
}