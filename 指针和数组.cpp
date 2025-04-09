//
// Created by pion on 2025/4/9.
//
#include<iostream>

using namespace std;

int main(){
    int arr[]={1,5,3,5,456,56,57,5,5546};

    int *p = arr;  //数组名就是首地址
    cout<<"指针访问第i个元素p[i]："<<p[8]<<endl;
    //对指针变量自增，从而实现指向下一个元素的地址
    cout<<"指针访问第二个元素（*++p）："<<*++p<<endl;
}