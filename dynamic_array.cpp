#include <iostream>

using namespace std;

int main()
{
    int *pointer = NULL, length;
    cout << "How many numbers you want to enter?" << endl;
    cin >> length;
    pointer = new int[length];
    for (int counter = 0; counter < length; counter++)
    {
        cout << "Enter no " << counter+1 << " :-  ";
        cin >> *(pointer + counter);
    }
    for (int i = 0; i < length; i++)
    {
        cout << *(pointer + i) << " ";
    }
    delete []pointer;
    return 0;
}
