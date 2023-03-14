#include<iostream>
#include<math.h>
using namespace std;

int order(int x)
{
    int len=0;
    while(x)
    {
        len++;
        x=x/10;
    }
    return len;
}

bool armstrong(int num,int len)
{
  int sum=0,temp=num,digit=0;
  while(temp!=0)
  {
    digit=temp%10;
    sum=sum+pow(digit,len);
    temp/=10;
  };
  return num == sum;

}

int main()
{
    int num=407,len;

    len=order(num);

    if(armstrong(num,len))
    {
        cout<<"num is armstrong"<<num<<endl;
    }
    else
    {
        cout<<num<<"not armstrong"<<endl;
    }

    return 0;
}