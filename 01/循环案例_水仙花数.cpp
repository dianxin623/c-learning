//
// Created by pion on 2025/3/31.
//
#include<iostream>
using namespace std;

int main(){
    int testNum=100; //��λ�����������ֲ���
    int sum=0;
    do{
        sum = (testNum/100)*(testNum/100)*(testNum/100)  +
                (testNum/10%10)*(testNum/10%10)*(testNum/10%10) +
                (testNum%10)*(testNum%10)*(testNum%10);
        if (sum == testNum){
            cout<<"�ҵ�һ��ˮ�ɻ�����"<<testNum<<endl;
        }
        testNum++;
    }
    while(testNum<1000);

    return 0;
}