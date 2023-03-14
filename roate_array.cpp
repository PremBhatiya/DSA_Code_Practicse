#include<iostream>
#include<algorithm>
using namespace std;


void rotate_arr(int arr[],int n)
{
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
}
int main()
{
    int num;
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"array is:"<<endl;
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"how many time you like to roate it "<<endl;
    cin>>num;
    for(int i=0;i<n;i++)
    {
        rotate_arr(arr,n);
        cout<<endl;
    }

    
}