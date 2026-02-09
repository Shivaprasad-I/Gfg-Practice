#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int>& arr, int k){
    int length = arr.size();
    int min = 0;
    int max = length - 1;
    // my naive approach which has issues
    // while(min < max){
    //     if(k == arr[min]) return min;
    //     else if( k == arr[max]) return max;
    //     
    //     int mid = (max + min) / 2;
    //     if(k < arr[mid] && k > arr[min]) max = mid;
    //     else if(k > arr[mid] && k < arr[max]) min = mid;
    //     else if ( k == arr[mid]) return mid;
    //     else break;
    // }

    int position = -1;
    while (min <= max){
        int mid = min + (max-min) /2;
        int midValue = arr[mid];

        if( midValue == k){
            position = mid;
            break;
        }
        else if( k < midValue){
            max = mid -1;
        }
        else if (k > midValue){
            min = mid + 1;
        }
    }
    if(position > 0 && arr[position - 1] == k){
        while(position > 0){
            if(arr[position - 1] == k) position -= 1;
            else break;
        }
    }
    return position;
}

int main(){
    // vector<int> arr = {1,2,3,4,5,6}; int k = 4; //ans = 3;
    // vector<int> arr = {11, 22, 33, 44, 55}; int k = 445; //ans = -1
    vector<int> arr = {1, 1, 1, 1, 2}; int k = 1; //ans = 0
    const int response = binary_search(arr, k);
    cout << "Position: " << response << endl;
}

