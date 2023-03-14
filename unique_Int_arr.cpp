#include<iostream>
using namespace std;
int unique(int arr[],int n)
{
    int xsum=0;
    for(int i=0;i<n;i++)
    {
        xsum=xsum^arr[i];
    }
    return xsum;
}
int main()
{
    int arr[]={1,2,3,4,1,2,3};
    cout<<unique(arr,7);
}