#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    //5
    //0 1 2 3 4 
    //1 2 3 4 5
    //итерация = индекс
    //a[i]       
    for(int i = 0;i < n;i++){
        if(a[i] % 2 == 0)
            cout << a[i] << " ";
        //cout << a[i] << " ";
    }
}