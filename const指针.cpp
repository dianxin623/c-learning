//
// Created by pion on 2025/4/9.
//
#include<iostream>
using namespace std;

int main(){
    int a=10;
    int b =20;
    //常量指针，指向可以改，指向的值不能更改
//    const int *p =&a;
//    *p = 333;  //错
//    p = &b; //对
//    cout<<*p<<endl;

    //指针常量：指向不可以改，指向的值可以改；
    int* const q = &a;
    cout<<a<<endl;
    *q = 11;
    cout<<a<<endl;

}