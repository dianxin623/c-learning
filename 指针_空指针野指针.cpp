//
// Created by pion on 2025/4/8.
//
#include<iostream>
using namespace std;

int main(){
    int a=10;
    int * p = &a;

    cout<<"a的地址为"<<&a<<endl;
    cout<<"通过指针访问a的地址："<<p<<endl;
    //指针的解引用
    *p=100;
    cout<<"a的取值为"<<a<<endl;
    cout<<"*p的取值为"<<*p<<endl;
    cout<<"int指针的内存空间大小："<<sizeof(int*)<<endl; // int * 代表指向int型数据的指针；
    cout<<"float指针的内存空间大小："<<sizeof(float*)<<endl; // int * 代表指向int型数据的指针；
    cout<<"double指针的内存空间大小："<<sizeof(double*)<<endl; // int * 代表指向int型数据的指针；
    cout<<"char指针的内存空间大小："<<sizeof(char*)<<endl; // int * 代表指向int型数据的指针；

    //空指针  指向内存中编号为0的空间
    int *q = NULL;
    cout<<*q<<endl; //编号0~255的内存空间无法访问

    //野指针
    int *l = (int *)0x1100;
    cout<<*l<<endl;



}