#include <iostream>
#include <cmath>

using namespace std;

int get_rightmost_set_bit(int n)
{
    // n -> new created bitset
    // n & -n = 000...100
    return log2(n & -n) + 1;
}

//  10 = 0b000...1010
//   A = 0b100...0000 = -2^31
//   B = 0b100...0111 = -2^31 + 4 + 2 + 1
//   C = 0b111...1111 = -2^31 + (2^30 + 2^29 + ... + 2^0)
//                    = -2^31 + (2^31 - 1)
//                    = -1

// -10 = 0b111...0110 = -1 -1 -8
//   & = 0b000...0010

//  13 = 0b000...1101
// -13 = 0b111...0011
//   & = 0b000...0001

int main()
{
    int n, m; cin >> n >> m;
    if (n == m)
    {
        cout << "-1\n";
        return 0;
    }

    // 52 = 0b110100
    //  4 = 0b000100
    //  ^ = 0b110000
    // 1) create new bitset by using XOR operator -> bitset contains different bits
    // 2) find the rightmost set bit of new created bitset
    
    cout << get_rightmost_set_bit(n ^ m) << '\n';
    return 0;
}