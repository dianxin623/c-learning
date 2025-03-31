//
// Created by pion on 2025/3/31.
//
#include <iostream>
using namespace std;
int main(){
    int real_num = rand()%100 +1 ; //生成(0~99) +1 的随机数
    int val = 0;
    while(1) {
        cout<< "请输入猜的数字(1~100)"<<endl;
        cin >> val;
        if (val == real_num) {
            cout << "猜对了！！" << endl;
            break;
        }
        else if (val > real_num)
            cout << "猜的过大" << endl;
        else
            cout << "猜的过小" << endl;
    }
    return 0;
}