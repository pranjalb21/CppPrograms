#include<iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cin >> n;
    while(n != 0){
        int re = n % 10;
        sum = sum * 10 + re;
        n /= 10;
    }
    cout << sum;
}