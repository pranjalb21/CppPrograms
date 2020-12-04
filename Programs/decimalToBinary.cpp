#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<int> arr;
    cin >> n;
    while(n != 0){
        int re = n % 2;
        n /= 2;
        arr.insert(arr.begin(), re);
    }
    for (auto i = arr.begin(); i < arr.end(); i++)
        cout << *i;    
    cout << endl << typeid(i).name();
}