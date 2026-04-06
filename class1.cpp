#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int size = sizeof(arr) / sizeof(int);
    int maxSum = INT_MIN;
    for(int st = 0; st < size; st++){
        int currSum = 0;
        for(int end = st; end < size; end++){
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }

     cout << "max subarray sum = " << maxSum << endl;
    return 0;
}