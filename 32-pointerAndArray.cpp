#include <iostream>
 
using namespace std;
const int MAX = 3;
 
int main ()
{
   int  var[MAX] = {10, 100, 200};
   int  *ptr;

   // 指针中最后一个元素的地址
   ptr = &var[MAX-1];
   for (int i = 0; i < MAX; i++)
   {
      *var = i;    // 这是正确的语法
      cout << "Address of var[" << i << "] = ";
      cout << ptr << endl;
      //var++;       // 这是不正确的
      // 移动到下一个位置
      ptr--;
   }
   return 0;
}
