#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int binarySearch(vector<int> arr, int target){
   int st = 0, end = arr.size() - 1;

   while(st <= end){
      int mid = (st + end)/2;

      if(target < arr[mid]){
         end = mid - 1;
      }else if(target > arr[mid]){
         st = mid + 1;
      }else{
         return mid;
      }
   }
   return -1;
}

int main(){
   vector<int>arr1 = {-1, 0, 10, 2, 3, 14, 15, 23};
   int tar1 = 23;

   cout << binarySearch(arr1, tar1) << endl;

   vector<int>arr2 = {-1, 15, 27, 33, 35};
   int tar2 = -1;

   cout << binarySearch(arr2, tar2) << endl;
   return 0; 
}