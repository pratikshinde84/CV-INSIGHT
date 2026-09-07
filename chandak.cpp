#include<iostream>
using namespace std;
int main(){
    int a=5,b=10;
    cout<<"a="<<a<<" and "<<"b="<<b;
    int temp=a;
    a=b;
    b=temp;
    cout<<"\na="<<a<<" and "<<"b="<<b;
    return 0;
}