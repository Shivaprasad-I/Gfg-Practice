#include<bits/stdc++.h>
using namespace std;

int findKRotation(vector<int>& arr){
    const int length = arr.size();
    int min = arr[0];
    for(int i = 0; i < length; i++){
        if(arr[i] < min)
            return i;
    }
    return 0;
}

int main(){
    // vector<int> arr = { 5,6,1,2,3,4}; // ans: 2
    // vector<int> arr = {5,1,2,3,4}; // ans: 1
    vector<int> arr = {1,2,3,4,5}; // ans: 0
    const int response = findKRotation(arr);
    cout << "Rotation: " << response << endl;
}
