#include<iostream>
using namespace std;
int main(){
    int a=15;
    if(a>=20){
        cout<<"line 1:a大于等于20"<<endl;
    }
    else{
        cout<<"line 2:a小于20"<<endl;
    }
    int b=89;
    switch(b/10){//switch语句的数据类型只能是：byte、short、char、String和枚举
        case 9:cout<<"A"<<endl;break;
        case 8:cout<<"B"<<endl;break;
        case 7:cout<<"C"<<endl;break;
        case 6:cout<<"D"<<endl;break;
        default:cout<<"no result"<<endl;
    }
}