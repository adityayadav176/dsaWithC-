#include <iostream>
using namespace std;

int main()
{

    int arr[] = {12, 34, 50, -2, 1000, 2000 ,12121, 2, 0, 1212, -121212};
    int size = 11;
    int maxVal = arr[0];
    int minVal = arr[0];

    for (int i = 0; i < size; i++){
        if(arr[i] > maxVal){
            maxVal = arr[i];
        }
        if(arr[i] < minVal){
            minVal = arr[i];
        }
    }

    cout << "minVal : " << minVal << endl;
    cout << "maxVal : " << maxVal << endl;
        return 0;
}
