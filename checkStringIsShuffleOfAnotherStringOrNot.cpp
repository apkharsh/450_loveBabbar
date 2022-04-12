// https://www.programiz.com/java-programming/examples/check-valid-shuffle-of-strings
// Check if a string is a valid shuffle of two distinct strings.

#include <bits/stdc++.h>
using namespace std;

bool check(string s1, string s2){
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;

}

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    if(check(s1, s2)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    };
    return 0;
}