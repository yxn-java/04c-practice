#include <iostream>
using namespace std;

int main()
{
   cout << "Size of char : " << sizeof(char) << endl;//字符的大小：1B
   cout << "Size of int : " << sizeof(int) << endl;//整数的大小：4B
   cout << "Size of short int : " << sizeof(short int) << endl;//短整型：2B
   cout << "Size of long int : " << sizeof(long int) << endl;//长整型：4B
   cout << "Size of float : " << sizeof(float) << endl;//实数：4B
   cout << "Size of double : " << sizeof(double) << endl;//双精度实数：8B
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;//宽字符：2B
   return 0;
}