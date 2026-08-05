#include<bits/stdc++.h>
using namespace std;
string s,t;
 int main() {
    cout<< " enter string 1";
    
    cin>> s;
    
    cout<< "enter string 2";
    
    cin>> t;

    if(s.length() != t.length()){
        cout <<" length of both strings are not equal";
        return 0;
    }
    int hash[26] = {0};

     for(int i=0;i<s.size(); i++) {
        hash[s[i] - 'a']++;
     }

     for( int i=0;i<t.size(); i++) {
        hash[t[i]- 'a']--;

     }

     for(int i=0;i<26;i++)
     {
        if(hash[i] != 0) {
            cout<<"both strings are not anagram";
            return 0;
        }
     }
     cout<< " they are anagram";

     return 0;
 }
