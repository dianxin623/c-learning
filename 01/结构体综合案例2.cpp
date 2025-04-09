//
// Created by pion on 2025/4/9.
//
#include<iostream>
using namespace std;

struct hero{
    string name;
    int age;
    string gender;
};

void bubbleSort(hero her[], int len){
    for(int i=0;i<len-1;i++)
        for(int j=0;j<len-1-i;j++){
            if(her[j].age>her[j+1].age){
                hero temp = her[j];
                her[j] = her[j+1];
                her[j+1] = temp;
            }
        }
}

void infoOutput(hero hero[], int len){
    for(int i = 0;i<len;i++){
        cout<<"英雄"<<hero[i].name<<"的性别是："<<hero[i].gender<<
            ", 年龄是："<<hero[i].age<<endl;
    }
}

int main(){
    hero h[5]={
            "刘备", 24, "男",
            "关羽", 22, "男",
            "张飞",20,"男",
            "赵云",21,"男",
            "貂蝉",10, "女",
    };
    int len = sizeof(h)/sizeof(h[0]);
    cout<<"排序之前打印："<<endl;
    infoOutput(h,len);
    bubbleSort(h,len);
    cout<<"排序后打印："<<endl;
    infoOutput(h,len);
}