//
// Created by pion on 2025/3/31.
//
#include<iostream>
using namespace std;

int main(){
    int testNum=100; //三位数的三个数字部分
    int sum=0;
    do{
        sum = (testNum/100)*(testNum/100)*(testNum/100)  +
                (testNum/10%10)*(testNum/10%10)*(testNum/10%10) +
                (testNum%10)*(testNum%10)*(testNum%10);
        if (sum == testNum){
            cout<<"找到一个水仙花数："<<testNum<<endl;
        }
        testNum++;
    }
    while(testNum<1000);

    return 0;
}