#include <iostream>

using namespace std;
int main(){
    float a,b;
    char c;
    while (true){
        cout<<"请输入运算符（+、-、*、/），输入q退出：";
        cin>>c;
        if (c=='q')
        {
            cout<<"感谢使用！"<<endl;
            return 0;
        }
        cout<<"请分别输入运算的2个数：";
        cin>>a>>b;
        switch (c)
        {
            case '+':
                cout<<a<<"+"<<b<<"="<<a+b<<endl;
                break;
            case '-':
                cout<<a<<"-"<<b<<"="<<a-b<<endl;
                break;   
            case '*':
                cout<<a<<"*"<<b<<"="<<a*b<<endl;
                break;
            case '/':
                if (b==0)
                {
                    cout<<"除数不可为0"<<endl;
                }else{
                cout<<a<<"/"<<b<<"="<<a/b<<endl;
                }
                break;
            default:
                cout<<"非法运算符！"<<endl;
                break;
        }
    }
}