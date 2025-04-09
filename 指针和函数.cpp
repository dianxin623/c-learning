//
// Created by pion on 2025/4/9.
//
#include<iostream>
using namespace std;
void swap(int a, int b);
void swap1(int*p1, int *p2);
int main(){
    //值传递
    int a = 10;
    int b=20;

    swap(a,b);
    cout<<"通过值传递，实参的值不变："<<a<<" "<<b<<endl;
    //地址传递
    swap1(&a,&b);
    cout<<"通过地址传递，实参的值发生改变："<<a<<" "<<b<<endl;
    return 0;

}

void swap(int a, int b){
    int temp =a;
    a =b;
    b=temp;

}
void swap1(int*p1, int *p2){
    int temp =*p1;
    *p1 =*p2;
    *p2=temp;
}