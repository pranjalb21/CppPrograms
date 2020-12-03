#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, p = 0, number = 0;
    cin >> n;
    while (n > 0){
        number += n % 10 * pow(2, p++);
        n /= 10;
    }
    cout << number;
}