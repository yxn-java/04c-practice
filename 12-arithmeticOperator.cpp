#include <iostream>
using namespace std;
 
int main()
{
    int a = 21;
    int b = 10;
    int c ;
 
    c = a + b;
    cout << "Line 1 - c 的值是 " << c << endl ;//31
    c = a - b;
    cout << "Line 2 - c 的值是 " << c << endl ;//11
    c = a * b;
    cout << "Line 3 - c 的值是 " << c << endl ;//210
    c = a / b;
    cout << "Line 4 - c 的值是 " << c << endl ;//整除：2
    c = a % b;
    cout << "Line 5 - c 的值是 " << c << endl ;//求余，1
    c = a++;
    cout << "Line 6 - c 的值是 " << c << endl ;//先把变量a的值赋给c,a自己加1,所以c=21
    c = a--;
    cout << "Line 7 - c 的值是 " << c << endl ;//先把变量a的值赋给c,a自己减1,所以c=22
    return 0;
} 