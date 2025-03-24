//
// Created by pion on 2025/3/24.
// 数据的输入
# include <iostream>
using namespace std;

int main(){
    
    //int型
    int a=0;
    cout << "给整型变量a赋值：\n" ;
    cin >> a;
    cout<<"a的值为："<<a<<endl;
    //float
    float f = 3.14f; // 给字面常量3.14指定为float而不是默认的double
    cout << "给浮点型变量f赋值：\n" ;
    cin >> f;
    cout<<"f的值为："<<f<<"大小为："<<sizeof(f)<<endl;
    //string
    char ch = 'a';
    cout << "给字符型变量ch赋值：\n" ;
    cin >> ch;
    cout<<"ch的值为："<<ch<<endl;
    //string
    string str = "hello";
    cout << "给字符串变量str赋值：\n" ;
    cin >> str;
    cout<<"str的值为："<<str<<endl;
    //bool
    bool flag = false;
    cout<<"给布尔类型赋值：\n";
    cin >>flag; //只要是非0的值都代表真；
    cout<< "flag的值为："<<flag;
    return 0;
}
