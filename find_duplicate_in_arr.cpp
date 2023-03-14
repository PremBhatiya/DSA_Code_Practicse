#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,6,3,2,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i]<<" ";
            }
        }
    }
}