#include <iostream>
using namespace std;
int main()
{
    int p=1;
    for(int i = 0; i<5;i++)
    {
        for(int j = 0; j < p; j++)
        {
            cout << "* ";

        }
        p++;
        cout << endl;
    }
    return 9;
}
