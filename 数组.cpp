//
// Created by pion on 2025/4/7.
// ��������ʱ������Ҫ�����ʼ���ȣ����и�ֵ���壬��ɲ����峤��

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    cout<<"��һ��Ԫ�صĳ���: "<<sizeof(arr[0])<<endl; //��һ��Ԫ�صĳ���
    cout<<"��������ĳ���: "<<sizeof(arr)<<endl; //��������ĳ���
    cout<<"����Ԫ�ظ�����"<<sizeof(arr)/sizeof(arr[0])<<endl;
    //���������Բ鿴������׵�ַ
    cout<<arr<<endl; //�ڴ���׵�ַ
    cout<<&arr[0]<<endl; //��һ��Ԫ�صĵ�ַ
    cout<<&arr[1]<<endl; //��һ��Ԫ�صĵ�ַ

    //һά���鰸��
    int weigh[5] = {300, 350, 200, 400, 250};
    int maxWeigh = weigh[0];
    int index = 0;
    for (int i = 0; i< sizeof(weigh)/sizeof(weigh[0]); ){
        if (weigh[i]> maxWeigh) {
            maxWeigh = weigh[i];
            index = i;
        }
        i++;
    }
    cout<<maxWeigh<<endl;
    cout<<index<<endl;

    //����2������Ԫ������
    int a[] = {1,3,2,5,4};
    //ʵ��˼·������԰���������һ����
    int length = sizeof(a)/sizeof(a[0]);
    int temp;
    for(int i =0; i<length/2; i++){
        temp = a[i];
        a[i] = a[length -1 -i];
        a[length -1 -i] = temp;
    }
    cout<<"����a���ú�";
    for (int i=0;i<length; i++)
    cout<< a[i]<<' ';
    cout<<endl;
    //��һ��ʵ�֣����ÿ���ʵ�����鳤�ȣ������±������Լ�
    int start = 0;
    int end = length -1;
    do
    {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        --end;
    }
    while(start<end);
    cout<<"����a�ٴ����ú�";
    for(int i = 0;i<length;i++)
        cout<<a[i]<<' ';
    cout<<endl;

    //ð������
    int b[] ={4,2,0,5,7,1,3,9,8};
    length = sizeof(b)/sizeof(b[0]);
    cout<<"����ǰb: ";
    for (int i=0;i<length;++i)
        cout<<b[i]<<' '; cout<<endl;
    for(int i=0;i<length-1; i++)
        for(int j=0;j<length-1-i;j++)
            if(b[j]>b[j+1]){
                temp = b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
    cout<<"�����b: ";
    for (int i=0;i<length;++i)
    cout<<b[i]<<' ';cout<<endl;

    //��ά���飺����
    int aa[2][3] = {
            {1,34,6},
            {5,7,12}
    };
    int aa0[][3] = {
            {1,34,6},
            {5,7,12}
    };
    int aa1[2][3] ={1,34,6,5,7,12};
    int aa2[][3] ={1,34,6,5,7,12};
    cout<<"��ά����aa�ĳ��ȣ�"<<sizeof(aa)<<endl;
    cout<<"��ά����aa��һ�еĳ��ȣ�"<<sizeof(aa[0])<<endl;
    cout<<"��ά����aa��һ��Ԫ�صĳ��ȣ�"<<sizeof(aa[0][0])<<endl;
    cout<<"��ά����aa��������"<<sizeof(aa)/sizeof(aa[0])<<endl;
    cout<<"��ά����aa��������"<<sizeof(aa[0])/sizeof(aa[0][0])<<endl;
    cout<<"��ά����aa���׵�ַ\\��һ���׵�ַ��"<<aa<<endl;
    cout<<"��ά����aa�ĵڶ��е�ַ��"<<aa[1]<<endl;
    cout<<"��ά����aa�ĵڶ��е�һ��Ԫ�ص�ַ��"<<&aa[1][0]<<endl;
    cout<<"��ά����aa�ĵڶ��еڶ���Ԫ�ص�ַ��"<<&aa[1][1]<<endl;

    //��ά���鰸����3��ѧ���ɼ�ͳ��
    int scores[][3] = {
            100, 100, 100,
            90, 50, 100,
            60,70,80
    };
    int lengthH = sizeof(scores)/sizeof(scores[0]);
    int lengthL = sizeof(scores[0])/sizeof(scores[0][0]);
    int sum;
    string name[] ={"����","��˹","����"};
    for(int i =0; i<lengthH;i++) {
        sum =0;
        for (int j = 0; j < lengthL; j++)
            sum += scores[i][j];
        cout <<  name[i] << "���ܷ֣�" << sum << endl;
    }
    return 0;
}
