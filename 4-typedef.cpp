#include <iostream>
using namespace std;
int main(){
    typedef int feet;//将整数类型int设置别名feet
    feet instance1=3,instance2=6;
    feet result=instance1+instance2;//结果为9
    cout<<"result="<<result<<endl;
    return 0;
}