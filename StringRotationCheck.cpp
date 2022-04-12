// Given a string s1 and a string s2, write a snippet to say whether s2 is a rotation of s1? 

#include <bits/stdc++.h>
using namespace std;

void checkRotation(string s1, string s2){
    if(s1.length() != s2.length()){
        cout << "Not a rotation" << endl;
        return;
    }
    string s3 = s1 + s1;
    if(s3.find(s2)){
        cout << "Is a rotation" << endl;
    }
    else{
        cout << "Not a rotation" << endl;
    }
}


int main(){
    string s1, s2;
    cin >> s1 >> s2;
    checkRotation(s1, s2);
    return 0;
}