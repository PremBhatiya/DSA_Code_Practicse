///naming error-its intersection progarm

#include<iostream>
using namespace std;
int intersection(int arr1[],int arr2[],int arr3[],int n1,int n2,int n3)
{
    cout<<"intersion array is :";
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                arr3[i]=arr1[i];
                cout<<arr3[i]<<" ";
            }
            
        }
    }
    cout<<endl;
}
int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={4,5,6,7,9};
    int arr3[10];
   
    cout<<endl;
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int n3=sizeof(arr3)/sizeof(arr3[0]);
    cout<<"array1 : ";
     for(int i=0;i<n1;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<"array2 : ";
    for(int i=0;i<n2;i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    intersection(arr1,arr2,arr3,n1,n2,n3);
    
}


