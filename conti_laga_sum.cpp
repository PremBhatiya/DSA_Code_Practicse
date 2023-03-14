#include<iostream>
#include<algorithm>
#include <climits>
using namespace std;

int Long_Con_sum(int arr[],int n)
{
    int max_sofar=INT_MIN;
    int ending=0;
    for(int i=0; i<n; i++)
    {
        ending+=arr[i];
        if(max_sofar<ending)
        {
         max_sofar=ending;
        } 
        if(ending<0)
        {
            ending=0;
        }
    }
    return max_sofar;
}

int main()
{
int arr[]={-1,2,-3,-4,-5,7,9};
int n=sizeof(arr)/sizeof(arr[0]);
int result=Long_Con_sum(arr,n);
cout<<"sum is :"<<result<<endl;
return 0;
}