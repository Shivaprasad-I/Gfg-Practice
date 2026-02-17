#include<bits/stdc++.h>
using namespace std;

int overLapInt(vector<vector<int>>& arr){
    vector<int> start;
    vector<int> end;
    int length = arr.size();

    for(vector<int> i : arr){
        start.push_back(i[0]);
        end.push_back(i[1]);
    }
    
    sort(start.begin(), start.end());
    sort(end.begin(), end.end());

    int overlapCount = 0;
    int max_overlap = 0;

    // for(int i = 0; i < length; i++){
    //     if( i > 0 && start[i] >= end[i-1]){
    //         overlapCount --;
    //     }
    //     
    //     if(start[i] <= end[i]){
    //         overlapCount ++;
    //         if(max_overlap < overlapCount) max_overlap = overlapCount;
    //     }
    // }

    int i = 0,j = 0;
    while( i < length && j < length){
        if(start[i] <= end[j]){
            overlapCount ++;
            i++;
            if(max_overlap < overlapCount) max_overlap = overlapCount;
        }
        else{
            overlapCount --;
            j++;
        }
    }
    if(max_overlap < overlapCount) return overlapCount;
    return max_overlap;
}

int main(){
    vector<vector<int>> arr = {{1, 2}, {2, 4}, {3, 6}}; // ans: 2
    // vector<vector<int>> arr = {{1, 8}, {2, 5}, {5, 6}, {3, 7}}; // ans: 4
    // vector<vector<int>> arr = { {45, 58}, {32, 41}, {20, 42}, {17, 60}, {42, 49}, {11, 56}, {40, 50}, {5, 52}, {28, 30}, {52, 57}, {32, 33}, {8, 44}, {36, 44}, {29, 68}, {18, 46}, }; // ans: 10
    const int response = overLapInt(arr);
    cout << "Response: " << response << endl;
}

// {45, 58},
// {32, 41},
// {20, 42},
// {17, 60},
// {42, 49},
// {11, 56},
// {40, 50},
// {5, 52},
// {28, 30},
// {52, 57},
// {32, 33},
// {8, 44},
// {36, 44},
// {29, 68},
// {18, 46},
