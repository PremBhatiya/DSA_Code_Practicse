#include <iostream>
#include<algorithm>
using namespace std;
int commonElements(int a1[],int a2[],int a3[],int n1,int n2,int n3)
{
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            for(int k=0; k<n3;k++)
            {
                if(a1[i]==a2[j] && a2[j]==a3[k] && a3[k]==a1[i])
                {
                    cout<<"number:"<<a1[i]<<endl;
                }
            }
        }
    }

}
int main()
{
    int arr1[] = {1, 5, 10, 20, 40, 80};
    int arr2[] = {6, 7, 20, 80, 100};
    int arr3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int n3=sizeof(arr3)/sizeof(arr3[0]);
    commonElements(arr1, arr2, arr3,n1,n2,n3);
    return 0;
}
