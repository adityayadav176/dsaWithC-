#include <iostream>
using namespace std;

void ChangeArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i] = 2 * arr[i];
    }
}
int main()
{
    int arr[] = {1, 2, 3};
    ChangeArray(arr, 3);

    cout << "in main\n";
    for(int i= 0; i <3; i++){
        cout <<  arr[i] << " ";
    } 
    return 0;
}
