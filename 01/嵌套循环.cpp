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

    // �˷��ھ���
    for (int i=1;i<10;i++) {
        for (int j = 1; j <= i; j++)
            cout << j << 'x' << i << "=" << i * j << '\t';
        cout << endl;
    }
//break���÷�������ѭ��������switchѡ�񣬲�������if
    int select =0;
    do {
        cin >> select;
        switch(select)
        {
            case 1:cout<<"����111\n";break;
            case 2:cout<<"����2\n";break;
            default:
                cout<<"������ѡ��\n";
        }
        if(select==1 ||select ==2){
            break;

        }
        cout<<"select==1||2ʱ�������ܷ񿴼�\n"; //����ǲ��ܣ�break�����Ĳ���if������if�����ѭ��
    }while(1);

    //continue���÷�
    for(int i = 0;i<10;i++){
        if(i%2 ==0)
            continue;
        cout<<i<<endl;
    }
    return 0;
}