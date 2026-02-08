#include<bits/stdc++.h>
using namespace std;

string reverseWords(string& s){
    const int length = s.size();
    vector<string> words;
    string word;
    for(int i = 0; i < length; i++){
        if(s[i] == '.'){
            if(word != ""){
                words.push_back(word);
            }
            word = "";
        }
        else {
            word += s[i];
            if(i == length - 1){
                words.push_back(word);
            }
        }
    }
    word = "";

    const int w_length = words.size() - 1;
    int i = 0;
    while(i < w_length - i){
        string item = words[i];
        words[i] = words[w_length - i];
        words[w_length - i] = item;
        i++;
    }

    //prepare the return value
    string returnValue;
    for(int j = 0; j < w_length + 1; j++){
        if(j != w_length){
            returnValue += words[j] + '.';
        }
        else{
            returnValue += words[j];
        }
    }
    return returnValue;
}

int main(){
    // string s = "This.is.the.string";
    string s = "..home.....";
    string response = reverseWords(s);
    cout << "Response: " << response << endl;
}
