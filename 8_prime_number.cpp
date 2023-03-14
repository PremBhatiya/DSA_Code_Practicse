#include<iostream>
using namespace std;
int main()
{
    int n=5,i;
    bool isprint=true;
    if(n<2)
    {
        isprint=false;
    }
    else
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                isprint=false;
                break;
            }
        }
    }
    isprint==1?cout<<"prime":cout<<"not prime";
    return 0;
}