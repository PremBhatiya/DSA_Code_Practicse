// // # finding common number least , which is common.
// #42%24=18
// #24%18=6
// #18%6=0---- so here 6 is gcd

#include<iostream>
using namespace std;

int Gcd(int a,int b)
{
    while(b!=0)
    {
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}
int main()
{
    int a,b;
    cout<<"number find GCD"<<endl;
    cin>>a>>b;
    cout<<"GCD is "<<Gcd(a,b)<<endl;
    return 0;
}