#include <iostream>

using namespace std;
 
int main (){
    // 声明简单的变量
    int    i;
    double d; 
    // 声明引用变量
    int&    r = i;
    double& s = d;
 
    i = 5;
    cout << "Value of i : " << i << endl;//输出变量的值
    cout << "Value of i reference : " << r  << endl;//输出引用变量的值
 
    d = 11.7;
    cout << "Value of d : " << d << endl;
    cout << "Value of d reference : " << s  << endl;
   
    return 0;
}