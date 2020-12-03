#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int max = a > b ? a > c ? a : c : b > c ? b : c;
    if((max * max) == (a * a + b * b + c * c) - (max * max))
        cout << "Yes these are Pythagorian triplet.";
    else
        cout << "NO these are not Pythagorian triplet.";
}