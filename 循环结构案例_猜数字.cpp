//
// Created by pion on 2025/3/31.
//
#include <iostream>
using namespace std;
int main(){
    int real_num = rand()%100 +1 ; //����(0~99) +1 �������
    int val = 0;
    while(1) {
        cout<< "������µ�����(1~100)"<<endl;
        cin >> val;
        if (val == real_num) {
            cout << "�¶��ˣ���" << endl;
            break;
        }
        else if (val > real_num)
            cout << "�µĹ���" << endl;
        else
            cout << "�µĹ�С" << endl;
    }
    return 0;
}