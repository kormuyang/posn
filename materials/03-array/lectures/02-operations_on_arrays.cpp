#include <iostream>

using namespace std;

int insert(int arr[], int n, int x, int cap, int pos)
{
    if (n == cap)
    {
        return n;
    }

    for (int i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[pos] = x;

    return n + 1;
}

int remove(int arr[], int n, int pos)
{
    if (n == 0)
    {
        return 0;
    }

    for (int i = pos + 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }

    return n - 1;
}

int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }

    return -1;
}

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << '\n';
    return;
}

int main()
{
    // Type of Array Operations
    // 1) Insertion
    // 2) Deletion
    // 3) Searching
    // 4) Traversal
    

    // 1) Insertion
    int arr_one[5];
    arr_one[0] = 2, arr_one[1] = 4, arr_one[2] = 6;
    int n = 3, cap = 5;

    // Before Insertion
    cout << "Insertion\n";
    print_array(arr_one, n);

    // After Insertion
    n = insert(arr_one, 3, 5, 5, 2);
    print_array(arr_one, n);
    cout << "n = " << n << "\n\n";


    // 2) Deletion
    int arr_two[5];
    arr_two[0] = 2, arr_two[1] = 4, arr_two[2] = 6;
    n = 3;

    // Before Deletion
    cout << "Deletion\n";
    print_array(arr_two, n);

    // After Deletion
    n = remove(arr_two, 3, 2);
    print_array(arr_two, n);
    cout << "n = " << n << "\n\n";


    // 3) Searching
    cout << "Searching\n";
    n = 4;
    int x = 4;
    print_array(arr_one, n);
    cout << "Index of " << x << " is " << search(arr_one, n, x) << "\n\n";


    // 4) Traversal
    cout << "Traversal\n";
    print_array(arr_one, n);

    return 0;
}