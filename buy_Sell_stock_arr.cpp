// #include <iostream>
// #include<climits>
// #include <vector>

// int maxProfit(const std::vector<int>& prices) {
//     int minPrice = INT_MAX;
//     int maxProfit = 0;
//     for (const int& price : prices) {
//         if (price < minPrice) {
//             minPrice = price;
//         } else {
//             maxProfit = std::max(maxProfit, price - minPrice);
//         }
//     }
//     return maxProfit;
// }

// int main() {
//     std::vector<int> prices = {7, 1, 5, 3, 6, 4};
//     std::cout << "Max profit: " << maxProfit(prices) << std::endl;
//     return 0;
// }

#include<iostream>
using namespace std;
void find_profit(int arr[],int n)
{
    int profit_t,max_profit=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            profit_t=arr[i]-arr[j];
            max_profit=max(max_profit,profit_t);
        }
    }
    cout<<"profit "<<max_profit<<" day:"<<"i"<<endl;
    
    
}
int main()
{
    int arr[]={7,1,5,3,9,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    find_profit(arr,n);

}