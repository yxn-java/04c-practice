#include <iostream>
using namespace std;

int main()
{
    unsigned int a = 60;     // 60 = 0011 1100  
    unsigned int b = 13;    // 13 = 0000 1101
    int c = 0;           

    c = a & b;             // 12 = 0000 1100,按位与
    cout << "Line 1 - c 的值是 " << c << endl ;
    c = a | b;             // 61 = 0011 1101,按位或
    cout << "Line 2 - c 的值是 " << c << endl ;
    c = a ^ b;             // 49 = 0011 0001,按位异或，相同值为0，不同值为1
    cout << "Line 3 - c 的值是 " << c << endl ;
    c = ~a;                // -61 = 1100 0011，按位反转
    cout << "Line 4 - c 的值是 " << c << endl ;
    c = a << 2;            // 240 = 1111 0000，左移2位，扩大4倍
    cout << "Line 5 - c 的值是 " << c << endl ;
    c = a >> 2;            // 15 = 0000 1111，右移2位，缩小到1/4
    cout << "Line 6 - c 的值是 " << c << endl ;
    return 0;
} 