#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, oct = 0;
    cin >> n;
    while(n > 0){
        oct = oct * 10 + (n % 8);
        n /= 8;
    }
    cout << oct;
}