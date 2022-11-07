#include <iostream>
#include <cmath>
using namespace std;
 
int main ()
{
   // 数字定义
   short  s = 10;
   int    i = -1000;
   long   l = 100000;
   float  f = 230.47;
   double d = 200.374;

   // 数学运算
   cout << "sin(d) :" << sin(d) << endl;//sin函数计算正弦值
   cout << "abs(i)  :" << abs(i) << endl;//abs函数计算绝对值
   cout << "floor(d) :" << floor(d) << endl;//floor函数计算小于或等于参数的最大整数
   cout << "sqrt(f) :" << sqrt(f) << endl;//sqrt函数计算开方
   cout << "pow( d, 2) :" << pow(d, 2) << endl;//pow函数=幂函数
 
   return 0;
}