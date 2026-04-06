#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[] = {20, 33, -21, 121, -33};
    int size = sizeof(arr) / sizeof(int);
    for(int st = 0; st < size; st++){
        for(int end = st; end < size; end++){
            for(int i = st; i <= end; i++){
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}