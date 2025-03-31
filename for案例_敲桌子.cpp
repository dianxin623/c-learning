//
// Created by pion on 2025/3/31.
//数字从0到100，个位数是7，或者10位数是7，或者是7的倍数，则输出敲桌子
#include<iostream>
using namespace std;

int main(){
    int num;
    for(int i = 1;i<=100; ){
        num = i;
        if(num%10 == 7 || num/10 == 7 ||num%7 == 0)  //个位数==7
            cout<<"敲桌子\n";
        else cout<<num<<endl;
        //else if(num/10 == 7) // 十位数是7
        //    cout<<num<<"\n";
        //else if(num%7 == 0) //是7的倍数
        //    cout<<num<<"\n";
        //else;
        i++;
    }
    return 0;
}