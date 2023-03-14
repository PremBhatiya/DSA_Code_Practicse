#include<iostream>
using namespace std;
int main()
{
    string name1,name2;
    cout<<"enter your 1st person name"<<endl;
    cin>>name1;
    cout<<"enter your 2nd person name"<<endl;
    cin>>name2;
    if(name1[0]>name2[0])
    {
        string temp=name1;
        name1=name2;
        name2=temp;
    }
    cout<<"after sorting name as per ALPH"<<endl;
    cout<<"name 1: "<<name1<<endl;
    cout<<"name 2: "<<name2<<endl;
    return 0;
}