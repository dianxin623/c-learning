//
// Created by pion on 2025/3/24.
// 字符串的拼接，代码报错，可能是16行 + 的问题

#include <iostream>
using namespace std;

//#include <string>

int main(){

    string major = "物理";
    string class_name = "1班";
    string name = "小黑";
    int age = 22;
    string msg = "我的专业是：" + major + "来自" + class_name + "我的名字是" + name;
    cout << msg;
    return 0;
}