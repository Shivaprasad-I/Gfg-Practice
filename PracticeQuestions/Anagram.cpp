#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;


// string s1 = "bc", s2 = "ad";
// this will not verify the actual charecters so it'll fail when sum is same but the chareacters are different
// bool areAnagram(string& s1, string& s2){
//     if(s1.size() != s2.size()) return false; 
//     int length = s1.size();
//     int size1 = 0;
//     int size2 = 0;
//     for(int i = 0; i <  length; i++){
//         size1 += s1[i];
//         
//         size2 += s2[i];
//     }
//     return size1 == size2;
// }

// this increases the space complexity (although it's negligible but there is even more optimized version)
// bool areAnagram(string& s1, string& s2){
//     if(s1.size() != s2.size()) return false;
//     unordered_map<char, int> map;
//     for(auto i : s1){
//         if(map.find(i) != map.end()){
//             map[i] = ++map[i];
//         }
//         else {
//             map.insert({i, 1});
//         }
//     }
//     for(auto i: s2){
//         if(map.find(i) == map.end()) return false;
//         else if(map[i] != 1){
//             map[i] = --map[i];
//         }
//         else{
//             map.erase(i);
//         }
//     }
//     if(map.size() > 0) return false;
//     else return true;
// }

// this is more optimized only for either small case/large case and will break if strings contain special or mixed cases
bool areAnagram(string& s1, string& s2){
    if(s1.size() != s2.size()) return false;

    int length = s1.size();
    int arr[26] = {0};
    for(int i = 0; i < length; i++){
        arr[s1[i] - 'a'] ++; // remove a value to make char values to start from 0
        arr[s2[i] - 'a'] --;
    }
    for(int i : arr){
        if(i != 0){
            return false;
        }
    }
    return true;
}
int main(){
    string s1 = "abc", s2 = "cad";
    const bool  response = areAnagram(s1, s2);
    cout << "Is Anagram: " << response << endl;
}
