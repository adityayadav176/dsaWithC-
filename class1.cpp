#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    

    cout << "size of vec = " << vec.size() << endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout << "after push back the size of vector = " << vec.size() << endl;

    vec.pop_back();
    cout << "after pop back the size of vector = " << vec.size() << endl;
    for (int val : vec){
        cout << val << endl;
    }

    cout << vec.front() << endl;
    cout << vec.back() << endl;

    cout << vec.at(1) << endl;

    return 0;
}

