#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 20;
    int c ;
    if ( a && b )
    {
        cout << "Line 1 - 条件为真"<< endl ;//a和b都不是0，则条件为真，否则条件不为真
    }
    if ( a || b )
    {
        cout << "Line 2 - 条件为真"<< endl ;//a和b至少有一个不是0，则条件为真，否则条件不为真
    }    /* 改变 a 和 b 的值 */
    a = 0;
    b = 10;
    if ( a && b )
    {
        cout << "Line 3 - 条件为真"<< endl ;//a和b都不是0，则条件为真，否则条件不为真
    }else{
        cout << "Line 4 - 条件不为真"<< endl ;
    }
    if ( !(a && b) ){
        cout << "Line 5 - 条件为真"<< endl ;//！将boolean值输出相反结果
    }
    return 0;
} 