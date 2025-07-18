#include <iostream>

using namespace std;

// Indirect Recursion is a function which calls itself indirectly
// Don't run this code! it contains an infinite loop

void funcOne()
{
    cout << "Function One!\n";
    funcTwo();
    return;
}

void funcTwo()
{
    cout << "Function Two!\n";
    funcOne();
    return;
}

int main()
{
    funcTwo();
    return 0;
}