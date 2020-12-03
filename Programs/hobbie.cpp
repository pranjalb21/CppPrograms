#include<iostream>
using namespace std;

int main(){
    string name;
    char choice;
    cout << "Enter your name:- ";
    cin >> name;
    cout << "Hey " << name << ", Do you like music?(Y/N) :- ";
    cin >> choice;
    switch (choice)
    {
    case 'y':
        cout << name << " likes " << char(9998);
        break;
    case 'Y':
        cout << name << " likes " << char(9998);
        break;
    case 'N':
        cout << name << " doesn't like " << char(9998);
        break;
    case 'n':
        cout << name << " doesn't like " << char(9998);
        break;
    default:
        cout << "Sorry! " << name << " you have entered a wrong choice.";
        break;
    }
}