//
// Created by pion on 2025/3/27.
//算术运算
//赋值运算 +=、-=、*=
//比较运算 ==、！=、<、
#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 3;

    //算术运算符
    cout<< a+b<<endl;
    cout<<a-b<<endl;
    cout<< a%b<<endl; //取模运算
    a = 10;
    b =20;
    cout<< a/b <<endl;  //整型变量相除，结果仍为整型

    // 递增递减运算符
    int a2 = 10;
    int b2 = ++a2 *10;
    cout<< "a2 = "<< a2<<endl;
    cout<< "b2 = "<< b2<<endl;

    int a3 = 10;
    int b3 = a3++*10;
    cout<< "a3 = "<< a3<<endl;
    cout<< "b3 = "<< b3<<endl;

    //赋值运算符
    a = 10;
    a += 2; // a = a + 2;
    cout << "a =" <<a <<endl;

    a = 10;
    a -= 2; // a = a - 2;
    cout << "a =" <<a <<endl;

    a = 10;
    a *= 2; // a = a * 2;
    cout << "a =" <<a <<endl;

    a = 10;
    a /= 2; // a = a / 2;
    cout << "a =" <<a <<endl;

    a = 10;
    a %= 2; // a = a % 2;
    cout << "a =" <<a <<endl;

    //比较运算符
    a = 10;
    b = 20;
    cout << (a == b) << endl; //先运算（），再拼接 << 符;
    cout << (a != b) << endl;
    // ! && ||
    a =10;
    cout << !a << endl; // c++中，除0以外，都是真
    cout << !!a << endl;
    b = 0;
    cout << (a && b) <<endl;
    system("pause");
    return 0;
}