#include<iostream>
using namespace std;
int main(){
    int count1=0;
    unsigned long count2=1;//定义无符号
    int j=1;
    for(int i=1;i<=100;i++){
        count1+=i;
    }
    while(j<20){
        j++;
        count2*=j;
    }
    cout<<"1+2+3+...+100结果"<<count1<<endl;
    cout<<"1*2*3*...*20结果"<<count2<<endl;//注意int范围有限，遇到较大的数用long
}