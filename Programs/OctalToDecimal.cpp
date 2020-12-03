#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, num = 0, p = 0;
    cin >> n;
    while(n > 0){
        num += n % 10 * pow(8, p++);
        n /= 10;
    }
    cout << num;
}