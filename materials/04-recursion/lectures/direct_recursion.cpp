#include <iostream>

using namespace std;

// Direct Recursion is a function which calls itself directly
// Don't run this code! it contains an infinite loop

void funcOne()
{
    cout << "Hello World!\n";
    funcOne();
    return;
}

int main()
{
    funcOne();
    return 0;
}