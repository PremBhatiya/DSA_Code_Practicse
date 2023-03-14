
#include<iostream>
#include<algorithm>
#include<vector>
int main()
{
std::vector<int> num={1,2,3};
do{
for(int n:num)
{
    std::cout<<n<<" ";
}
std::cout<<'\n';
}while(std::next_permutation(num.begin(),num.end()));
return 0;
}    
