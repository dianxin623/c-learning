//
// Created by pion on 2025/3/31.
//���ִ�0��100����λ����7������10λ����7��������7�ı����������������
#include<iostream>
using namespace std;

int main(){
    int num;
    for(int i = 1;i<=100; ){
        num = i;
        if(num%10 == 7 || num/10 == 7 ||num%7 == 0)  //��λ��==7
            cout<<"������\n";
        else cout<<num<<endl;
        //else if(num/10 == 7) // ʮλ����7
        //    cout<<num<<"\n";
        //else if(num%7 == 0) //��7�ı���
        //    cout<<num<<"\n";
        //else;
        i++;
    }
    return 0;
}