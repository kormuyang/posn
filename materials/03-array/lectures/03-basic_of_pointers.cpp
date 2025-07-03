#include <iostream>

using namespace std;

int main()
{
    // What will happen if we code "if (array_one == array_two)" ?
    int array_one[] = {0, 1, 2, 3},
        array_two[] = {0, 1, 2, 3};

    if (array_one == array_two)
    {
        cout << "Equal!\n";
    }
    else
    {
        cout << "Not the Same!\n";
    }

    // What will happen if we code "cout << array_one" ?
    cout << array_one << '\n';
    cout << array_two << '\n';

    // Examples of pointer usages
    int number_one = 14;
    int *number_one_address = &number_one;
    cout << number_one << " is at " << number_one_address << '\n';

    string name = "Ohm";
    string *name_address = &name;
    cout << name << " is at " << name_address << '\n';

    return 0;
}