#include<bits/stdc++.h>
using namespace std;

int main(){
    char c;cin >> c;
    string s;cin >> s;
    for(int i = 0;i < s.size();i++)
        if(s[i] != c)
            cout << s[i];
}