#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int, string> m;
    m.insert(pair<int, string> (1, "Pranjal"));
    map<int, string> :: iterator itr;
    itr = m.begin();
    cout << itr -> first << endl << itr -> second << endl;
    map<int, string>::iterator itr1;
    itr1 = m.find(7);
    cout << itr1->first << " " << itr1->second;
    
}