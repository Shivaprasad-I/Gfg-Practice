#include<bits/stdc++.h>
using namespace std;

string reverseString(string& s){
    const int length = s.size() - 1;
    if( length <= 0 ) return s;
    int i = 0;
    while(i < length - i){
        char swapItem = s[i];
        s[i] = s[length - i];
        s[length - i] = swapItem;
        i++;
    }
    return s;
}

int main(){
    string s = "[(])";
    string response = reverseString(s);
    cout << "Input: " << s << " Output: " << response << endl;
}
