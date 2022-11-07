#include <iostream>
using namespace std;
int main(){
    enum color{red,green=5,blue,yellow} c;
    cout<<"red="<<red<<endl;//默认情况下，枚举类第一个对象的值为0
    cout<<"green="<<green<<endl;//5
    cout<<"blue="<<blue<<endl;//枚举类下一个对象的值+1，为6
    cout<<"yellow="<<yellow<<endl;//同理，为7
}