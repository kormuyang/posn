# Bitwise Algorithms Basic

The Bitwise Algorithms are used to perform operations at bit-level or to manipulate bits in different ways. The bitwise operations are found to be much faster and are some times used to improve the efficiency of a program.

### Example: Check if a Number is Even or Odd
This can be easily done using the Bitwise AND (`&`) operator.
- If the last bit of the number is set (`1`), the number is odd.
- Otherwise, the number is even.

```cpp
if (num & 1) {
    // num is ODD
} else {
    // num is EVEN
}
```
<br>

# Bitwise Operations
Operators that work at the bit level are called Bitwise Operators. There are six main types, as described below:

### 1. `&` (Bitwise AND)
Performs an AND operation on each bit of two numbers.
The result is `1` only if both bits are `1`.
Example:
Suppose `A = 5` (binary `0101`) and `B = 3` (binary `0011`):
```cpp
A & B = 1  // Binary: 0001
```
<br>

### 2. `|` (Bitwise OR)
Performs an OR operation on each bit of two numbers.
The result is '1' if any bit is '1'.
Example:
Suppose `A = 5` (binary `0101`) and `B = 3` (binary `0011`):
```cpp
A | B = 7  // Binary: 0111
```
<br>

### 3. `^` (Bitwise XOR)
Performs an XOR operation on each bit of two numbers.
The result is 1 if the two bits are different.
Example:
Suppose `A = 5` (binary `0101`) and `B = 3` (binary `0011`):
```cpp
A ^ B = 6  // Binary: 0110
```
<br>

### 4. `<<` (Left Shift)
Shifts the bits of the first operand to the left by the number of positions specified by the second operand.
Example:
Suppose `A = 5` (binary `0101`):
```cpp
A << 1 = 10  // Binary: 1010
```
<br>

### 5. `>>` (Right Shift)
Shifts the bits of the first operand to the right by the number of positions specified by the second operand.
Example
Suppose `A = 5` (binary `0101`):
```cpp
A >> 1 = 2  // Binary: 0010
```
<br>

### 6. `~` (Bitwise NOT)
Inverts all the bits of a number.
Example:
Suppose `A = 5` (binary `0101`):
```cpp
~A = -6  // Binary: In two's complement representation
```
<br>

# Time and Space Complexity
   - Time Complexity: **O(1)**  
   - Auxiliary Space: **O(1)**
