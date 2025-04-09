//
// Created by pion on 2025/4/9.
//
#include<iostream>
using namespace std;

//创建学生 数据类型；
struct student{
    string name;
    int age;
    float score;
}s2;

struct teacher{
    int id;
    string name;
    struct student stu;
};

void infoOutput(student s){

    cout<<s.name<<endl;
    cout<<s.age<<endl;
    cout<<s.score<<endl;
}
void infoOutput1(const student *s){

    cout<<s->name<<endl;
    cout<<s->age<<endl;
    cout<<s->score<<endl;
}

int main(){
    student stu1 = {"张三", 21,88.5454};
    stu1.name ="afdsf";
    stu1.age = 54;
    cout<<"学生姓名："<<stu1.name<<"年龄"<<stu1.age<<endl;
    s2.name = "王五";

    //结构体作为一种数据类型，也可以构成数组
    student arr[]={
            {"幅度", 2,5.543},
            "王",75, 11009.55
    };
    cout<<arr[1].name<<endl;


    //结构体指针
    student s1={"里斯", 24,56.98};
    student *p = &s1;
    cout<<p->name<<endl;

    teacher wang;
    wang.name = "王小儿";
    wang.id = 2255;
    wang.stu.name = "小小二";


    infoOutput1(&stu1);
    infoOutput(stu1);

    student s11 = {"测试const",11, 43};
    const student *qq = &s11;

}


