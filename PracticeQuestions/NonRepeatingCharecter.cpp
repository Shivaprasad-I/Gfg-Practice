#include<bits/stdc++.h>
using namespace std;

char nonRepeatingChar(string& s){
    int length = s.size();
    int letters[26] = {0};
    for(int i = 0; i < length; i++){
        letters[s[i]-'a']++;
    }
    for(char i : s){
        if(letters[i - 'a'] == 1){
            return i;
        }
    }
    return '$';
}

int main(){
    // string s = "nonrepeating"; //ans: o
    // string s = "aabbcc"; //ans: $
    string s = "racecar"; //ans: e
    const char response = nonRepeatingChar(s);
    cout << "First non repeating charecter: " << response << endl;
}
