#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& arr){
    int length = arr.size();
    int min = arr[0];
    int min_index = 0;
    int profit = 0;
    for(int i = 1; i < length; i++){
        if(arr[i] < min){ 
            min = arr[i];
            min_index = i;
        }

        if(i > min_index && arr[i] > min && arr[i] - min > profit){
            profit = arr[i] - min;
        }
    }
    return profit;
}

int main(){
    // vector<int> arr = {7,10,1,3,6,9,2}; //ans: 8
    // vector<int> arr = {7,6,4,3,1}; //ans: 0
    vector<int> arr = {1,3,6,9,11}; //ans: 10
    const int profit = maxProfit(arr);
    cout << "Profit: " << profit << endl;
}
