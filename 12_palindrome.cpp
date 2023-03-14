#include<iostream>
using namespace std;
int main()
{
   int num,rev=0,rem=0;
   num=1234;
   int num1=num;
   cout<<"number is "<<num<<endl;

    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    cout<<"reverse number is"<<rev<<endl;

    if(num1==rev)
    {
        cout<<"palindrome number"<<endl;
    }
    else
    {
        cout<<"number is not palindrome"<<endl;
    }
    return 0;
}