//
// Created by pion on 2025/4/9.
//
#include<iostream>
using namespace std;

struct student{
    string sName;
    float score;
};

struct teacher{
    string tName;
    student aArr[5];
};

void allocate(teacher * t, int len){
        string nameSeed = "ABCDE";
        for (int i=0;i<len;i++){
            t[i].tName = "teacher_";
            t[i].tName+= nameSeed[i];
            for(int j=0;j<5;j++){
                t[i].aArr[j].sName = "student_";
                t[i].aArr[j].sName += nameSeed[j];
                int random = rand()%61 +40;
                t[i].aArr[j].score = random;
            }
        }
}

void printInfo(teacher t[], int len){
    for(int i=0;i<len;i++) {
        cout << "老师的姓名:" << t[i].tName << endl;
        for (int j = 0; j < 5; j++)
            cout << "\t" << t[i].tName <<
            "老师带的学生为：" << t[i].aArr[j].sName << "，成绩为：" << t[i].aArr[j].score<< endl;
    }
}

int main(){
    srand(time(NULL));  //每次运行更改随机数种子
    teacher tArr[3];
    int len= sizeof(tArr)/sizeof(tArr[0]);
    allocate(tArr, len);
    printInfo(tArr, len);
}