// #include <iostream>
// #include <algorithm>

// using namespace std;

// void move_negative_to_one_side(int arr[], int n) {
//     int i = 0;
//     int j = n - 1;
//     while (i < j) {
//         while (arr[i] < 0) {
//             i++;
//         }
//         while (arr[j] >= 0) {
//             j--;
//         }
//         if (i < j) {
//             swap(arr[i], arr[j]);
//         }
//     }
// }

// int main() {
//     int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);
    
//     move_negative_to_one_side(arr, n);
    
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
    
//     return 0;
// }
#include<iostream>
#include<algorithm>
using namespace std;

move_N_one_side(int arr[],int n)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        while(arr[i]<0)
        {
            i++;
        }
        while(arr[j]>0)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    
}
int main()
{
    int arr[]={-1,2,4,-3,5,9,-21};
    int n=sizeof(arr)/sizeof(arr[0]);
    move_N_one_side(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}