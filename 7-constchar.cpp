#include <iostream>
using namespace std;
int main(){
    cout<<"\\"<<endl;//输出反斜杠
    cout<<"ab\'cd"<<endl;//输出ab'cd
    cout<<"a"<<endl;//输出a
    cout<<"\?"<<endl;//输出？
    cout<<"Hello\rWorld"<<endl;//输出Hello回车World
    cout<<"Hello\tWorld"<<endl;//\t相当于输入一个tab字符
    return 0;
}