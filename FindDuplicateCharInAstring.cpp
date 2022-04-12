// write a code to find duplicate character in a string
#include <bits/stdc++.h>
using namespace std;

int main(){
    /*Write your code here*/
    unordered_map<char, int> mp;
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        mp[s[i]]++;
    }

    for(auto it = mp.begin(); it != mp.end(); it++){
        if(it->second > 1){
            cout << it->first << endl;
        }
    }
    return 0;
}
