//
// Created by pion on 2025/3/24.
// ���ݵ�����
# include <iostream>
using namespace std;

int main(){
    
    //int��
    int a=0;
    cout << "�����ͱ���a��ֵ��\n" ;
    cin >> a;
    cout<<"a��ֵΪ��"<<a<<endl;
    //float
    float f = 3.14f; // �����泣��3.14ָ��Ϊfloat������Ĭ�ϵ�double
    cout << "�������ͱ���f��ֵ��\n" ;
    cin >> f;
    cout<<"f��ֵΪ��"<<f<<"��СΪ��"<<sizeof(f)<<endl;
    //string
    char ch = 'a';
    cout << "���ַ��ͱ���ch��ֵ��\n" ;
    cin >> ch;
    cout<<"ch��ֵΪ��"<<ch<<endl;
    //string
    string str = "hello";
    cout << "���ַ�������str��ֵ��\n" ;
    cin >> str;
    cout<<"str��ֵΪ��"<<str<<endl;
    //bool
    bool flag = false;
    cout<<"���������͸�ֵ��\n";
    cin >>flag; //ֻҪ�Ƿ�0��ֵ�������棻
    cout<< "flag��ֵΪ��"<<flag;
    return 0;
}
