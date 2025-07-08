#include <iostream>

using namespace std;

int main()
{
    // An iterator is a pointer-like object that points to an element of the STL container.
    vector<string> student_names;
    student_names.push_back("Kavin");
    student_names.push_back("Poom");
    student_names.push_back("Pop");

    vector<string>::iterator itr = student_names.begin();

    cout << *itr << '\n';

    // how can we travel through vector's element via iterator
    for (itr = student_names.begin(); itr < student_names.end(); itr++)
    {
        cout << *itr << ' ';
    }
    cout << '\n';

    return 0;
}