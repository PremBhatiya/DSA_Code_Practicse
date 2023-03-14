#include<iostream>
using namespace std;
void dec(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}
void ins(int m)
{
    if(m==0)
    {
        return;
    }
    ins(m-1);
    cout<<m<<endl;
    
}
int main()
{
    int n,m;
    cout<<"enter number"<<endl;
    cin>>n>>m;
    dec(n);
    cout<<" "<<endl;
    ins(m);
}