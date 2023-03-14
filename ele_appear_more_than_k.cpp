#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        if(i==1||i==3||i==5)
        {
            for(int k=1;k<=n;k++)
        {
            cout<<"*";
        }
        cout<<endl;
        }
        if(i==2)
        {
            cout<<"*"<<endl;
        }
        if(i==4)
        {
        for(int k=1;k<n;k++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
            
        }


    }
}