#include<bits/stdc++.h>
#include <cmath>
using namespace std;

int binarySearchOnAnswer(int x){
    int min = 0;
    int max = sqrt(x);
    cout << "Initial Max Value: " << max << endl;
    int num = 0;
    while (min <= max){
        int mid = min + ((max-min)/2);
        long value = (long) mid * mid;
        cout << "Mid: " << mid << " MidValue: " << value << endl;
        if(value >= x){
            max = mid - 1;
        }
        else if(value < x){
            num = mid;
            min = mid + 1;
        }
    }
    return num;
}

int main(){
    int a;
    cout << "Enter k number: ";
    cin >> a;
    const int response = binarySearchOnAnswer(a);
    cout << response << endl;
}
