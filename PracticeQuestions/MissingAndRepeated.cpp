#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;

vector<int> findTwoElement(vector<int>& arr){
    int length = arr.size();
    long expectedSum = (length*(length+1))/2;
    unordered_map<int, int> map;
    int repeatedValue;
    long actualSum = 0;
    for(int i = 0; i < length; i++) {
        actualSum += arr[i];
        if(map.find(arr[i]) != map.end()){
            repeatedValue = arr[i];
        }
        else{
            map.insert({arr[i], 1});
        }
    }
    int missingValue =  expectedSum - actualSum + repeatedValue;
    vector<int> returnValue = { repeatedValue, missingValue};
    return returnValue;
}

int main(){
    // vector<int> arr = { 1,2,5,4,4 }; // repeated 4, missing 3
    // vector<int> arr = {1,1,3}; // repeated 1, missing 2
    // vector<int> arr = {1,3,3}; // repeated 3, missing 2
    vector<int> arr = {4,3,6,2,1,1}; // repeated 1, missing 5
    vector<int> response = findTwoElement(arr);
    cout << "Repeated: " << response[0] << " Missing: " << response[1] << endl;
}
