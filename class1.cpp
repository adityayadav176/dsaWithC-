#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 3, 5};
    int size = sizeof(arr) / sizeof(int);

    for(int i = 0; i < size; i++) {
        bool isUnique = true;

        for(int j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if(isUnique) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}