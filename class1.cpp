#include <iostream>
using namespace std;

int main()
{
    int target = 8;
    int arr[] = {12, 34, 45, 89, 8, 10};
    int size = sizeof(arr) / sizeof(int);

    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << "target found at index : " << i << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "not found!";
    }
    return 0;
}
