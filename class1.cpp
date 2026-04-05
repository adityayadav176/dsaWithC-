#include <iostream>
using namespace std;

int calSum(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int arr[] = {1, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    
     cout << calSum(arr, size)<< endl;
    
    return 0;
}
