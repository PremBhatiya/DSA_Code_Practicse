#include <iostream>
#include <vector>

long long countInversions(std::vector<int>& arr) {
    long long count = 0;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] > arr[j]) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    std::vector<int> arr = {1, 20, 6, 4, 5};
    std::cout << "Number of inversions: " << countInversions(arr) << std::endl;
    return 0;
}
