//here they are two array & random number
///array 1st must have inital and other in next one
#include<iostream>
#include<algorithm>
using namespace std;

void mer_age(int arr1[],int arr2[],int m,int n)
{
    int b=m+n;
    int arr3[b];
    bool flag=1;
    for(int j=0;j<m;j++)
    {
        arr3[j]=arr1[j];
    }
    for(int k=0;k<n; k++)
    {
        arr3[m+1+k]=arr2[k];
    }               
    cout<<"array"<<endl;
    for(int l=0;l<=b;l++)
    {
        cout<<arr3[l]<<" ";
    }
}
int main()
{
    int a1[]={1,5,9,10,15,20};
    int a2[]={2,3,8,13};
    int m=sizeof(a1)/sizeof(a1[0]);
    int n=sizeof(a2)/sizeof(a2[0]);
    mer_age(a1,a2,m,n);
    return 0;
}