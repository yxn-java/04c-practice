#include <iostream>
using namespace std;

int main()
{
    int a = 21;
    int b = 10;
    int c ;

    if( a == b ){
        cout << "Line 1 - a 等于 b" << endl ;//false，不输出
    }else{
        cout << "Line 1 - a 不等于 b" << endl ;//true，输出，下面同理
    }
    if ( a < b ) {
        cout << "Line 2 - a 小于 b" << endl ;//false
    }else{
        cout << "Line 2 - a 不小于 b" << endl ;//true
    }
    if ( a > b ){
        cout << "Line 3 - a 大于 b" << endl ;//true
    }else{
        cout << "Line 3 - a 不大于 b" << endl ;//false
    }    /* 改变 a 和 b 的值 */
    a = 5;
    b = 20;
    if ( a <= b ){
        cout << "Line 4 - a 小于或等于 b" << endl ;//true
    }
    if ( b >= a ){
        cout << "Line 5 - b 大于或等于 a" << endl ;//true
    }
    return 0; 
} 