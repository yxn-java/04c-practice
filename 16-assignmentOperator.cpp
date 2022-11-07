#include <iostream>
using namespace std;

int main()
{
    int a = 21;
    int c ;
    c =  a;
    cout << "Line 1 - =  运算符实例，c 的值 = : " <<c<< endl ;//21
    c +=  a;
    cout << "Line 2 - += 运算符实例，c 的值 = : " <<c<< endl ;//42
    c -=  a;
    cout << "Line 3 - -= 运算符实例，c 的值 = : " <<c<< endl ;//21
    c *=  a;
    cout << "Line 4 - *= 运算符实例，c 的值 = : " <<c<< endl ;//441
    c /=  a;
    cout << "Line 5 - /= 运算符实例，c 的值 = : " <<c<< endl ;//21
    c  = 200;
    c %=  a;
    cout << "Line 6 - %= 运算符实例，c 的值 = : " <<c<< endl ;//11
    c <<=  2;
    cout << "Line 7 - <<= 运算符实例，c 的值 = : " <<c<< endl ;//44
    c >>=  2;
    cout << "Line 8 - >>= 运算符实例，c 的值 = : " <<c<< endl ;//11=0000 1011
    c &=  2;
    cout << "Line 9 - &= 运算符实例，c 的值 = : " <<c<< endl ;//2=0000 0010
    c ^=  2;
    cout << "Line 10 - ^= 运算符实例，c 的值 = : " <<c<< endl ;//0
    c |=  2;
    cout << "Line 11 - |= 运算符实例，c 的值 = : " <<c<< endl ;//2
    return 0; 
} 