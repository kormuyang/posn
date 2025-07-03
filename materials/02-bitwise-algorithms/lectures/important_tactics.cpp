#include <iostream>

using namespace std;

int main()
{
    // & (AND), | (OR), ^ (XOR), << (Left Shift), >> (Right Shift), ~ (NOT)


    // 1. How to set a bit at n'th position in the number "num":
    int num = 9, n = 2;
    //      num = 0b01001
    //        1 = 0b00001
    // (1 << n) = 0b00100
    //        | = 0b01101 = 13
    num = num | (1 << n);
    cout << num << '\n';


    // 2. How to unset/clear a bit at n'th position in the number "num":
    int num = 13, n = 2;
    //       num = 0b01101
    //         1 = 0b00001
    //  (1 << n) = 0b000...00100
    // ~(1 << n) = 0b111...11011
    //         & = 0b01001
    num = num & ~(1 << n);
    cout << num << '\n';


    // 3. Toggling a bit at n'th position:
    int num = 13, n = 2;
    //       num = 0b01101
    //         1 = 0b00001
    //  (1 << n) = 0b00100
    //         ^ = 0b01001
    num = num ^ (1 << n);
    cout << num << '\n';


    // 4. Checking if bit at nth position is set or unset:
    int num = 13, n = 2;
    //       num = 0b01101
    //         1 = 0b00001
    //  (1 << n) = 0b00100
    //         & = 0b00100
    if ((num & (1 << n)) > 0)
    {
        cout << "1\n";
    }
    else
    {
        cout << "0\n";
    }


    // 5. Divide by 2:
    int num = 13;
    //       num = 0b01101
    //  num >> 1 = 0b00110
    //  num >> 2 = 0b00011
    cout << (num >> 1);


    // 6. Multiplying by 2:
    int num = 13;
    //       num = 0b001101
    //  num << 1 = 0b011010
    //  num << 2 = 0b110100
    cout << (num << 1);


    // 7. Find log base 2 of a 32 bit integer:
    int num = 13, ans = 0;
    while (num > 0)
    {
        ans++;
        num = (num >> 1);
    }
    cout << num << '\n';

    // 8. Swapping Two Numbers:
    int num_1 = 13, num_2 = 15;

    //                 num_1 = 0b01101
    //                 num_2 = 0b01111
    // num_1 = num_1 ^ num_2 = 0b00010
    // num_2 = num_2 ^ num_1 = 0b01101 = num_1 (initial)
    // num_1 = num_1 ^ num_2 = 0b01111 = num_2 (initial)

    // num_1 = (num_1 ^ num_2);
    num_1 ^= num_2;
    num_2 ^= num_1;
    num_1 ^= num_2;

    return 0;
}