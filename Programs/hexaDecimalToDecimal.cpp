#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int num = 0, p = 1;
    cin >> s;
    for (int i = s.size() - 1; i >= 0 ; i--){
        if(s[i] >= '0' && s[i] <= '9')
            num += p * (s[i] - '0');
        else if(s[i] >= 'A' && s[i] <= 'F')
            num += p * (s[i] - 'A' + 10);
        else{
            cout << "This is not a hexadecimal number.";
            return 0;
        }
        p *= 16;
    }
    cout << num;
}