#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;

// My Solution using hash map to store all the occurances
// Both Solution have same time complexity but Boyer-Moore has memory advantage
// int majorityElement(vector<int>& arr){
//     unordered_map<int, int> map;
//     int length = arr.size();
//     for(int i = 0; i < length; i++){
//         auto item = map.find(arr[i]);
//         if( item != map.end()){
//             int* occurance = &map[arr[i]];
//             *occurance += 1;
//         }
//         else {
//             map.insert({arr[i], 1});
//         }
//     }
//     float half = length / (float)2;
//     for(auto i: map){
//         if(i.second > half) {
//             return i.first;
//         }
//     }
//     return -1;
// }

//Optimized solution using Boyer-Moore Mjority Vote Algorithm
int majorityElement(vector<int>& arr){
    int count =0;
    int candidate = -1;
    for(int num : arr){
    cout << "candidate: " << candidate << " count: " << count << endl;
        if(count == 0){
            candidate = num;
        }
        if(num == candidate){
            count++;
        } else{
            count--;
        }
    }
    // cout << "candidate: " << candidate << "count: " << count << endl;
    count = 0;
    for(int num : arr){
        if(num == candidate){
            count++;
        }
    }
    if(count > arr.size()/2){
        return candidate;
    }
    return -1;
}

int main(){
    vector<int> arr = { 5,1,5,4,5,5,4};
    int value = majorityElement(arr);
    cout << "Majority Element : " << value << endl;
}
