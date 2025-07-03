#include <iostream>

using namespace std;

    // n = 5
    // X****
    // *X***
    // **X**
    // ***X*
    // ****X

    // n = 5
    // ****X
    // ***X*
    // **X**
    // *X***
    // X****

    // n = 5
    // X   X
    //  X X
    //   X
    //  X X
    // X   X

    // n = 5
    //   X
    //  X
    // X
    // 
    // 

    // n = 5
    //   X
    //  X X
    // X   X
    //  X X
    //   X


int main()
{
    int n; cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << "X";
            }
            else
            {
                cout << "*";
            }
        }
        cout << '\n';
    }
    cout << '\n';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                cout << "X";
            }
            else
            {
                cout << "*";
            }
        }
        cout << '\n';
    }
    cout << '\n';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j or i + j == n - 1)
            {
                cout << "X";
            }
            else
            {
                cout << " ";
            }
        }
        cout << '\n';
    }
    cout << '\n';

    return 0;
}