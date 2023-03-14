#include<iostream>
using namespace std;

class great
{
    public:
    int calcLargest(int,int);
};

int great::calcLargest(int a,int b)
{
    if(a>b)
      return a;
    else
      return b;
}
int main()
{
    great obj;
    int num1,num2,largest;
    num1=23,num2=34;
    largest=obj.calcLargest(num1,num2);
    cout<<largest<<"largest"<<endl;
    return 0;

}