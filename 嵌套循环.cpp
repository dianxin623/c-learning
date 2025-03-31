//
// Created by pion on 2025/3/31.
//
#include<iostream>
using namespace std;
int main(){
    for (int i =1;i<11; ){
        for(int j = 1;j<11;j++)
            cout<<"* ";
        cout<<'\n';
        ++i;
    }

    // 乘法口诀表
    for (int i=1;i<10;i++) {
        for (int j = 1; j <= i; j++)
            cout << j << 'x' << i << "=" << i * j << '\t';
        cout << endl;
    }
//break的用法，跳出循环，跳出switch选择，不能跳出if
    int select =0;
    do {
        cin >> select;
        switch(select)
        {
            case 1:cout<<"这是111\n";break;
            case 2:cout<<"这是2\n";break;
            default:
                cout<<"请重新选择\n";
        }
        if(select==1 ||select ==2){
            break;

        }
        cout<<"select==1||2时，测试能否看见\n"; //结果是不能，break跳出的不是if，而是if外面的循环
    }while(1);

    //continue的用法
    for(int i = 0;i<10;i++){
        if(i%2 ==0)
            continue;
        cout<<i<<endl;
    }
    return 0;
}