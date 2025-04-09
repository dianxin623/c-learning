//
// Created by pion on 2025/4/7.
//

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    cout<<"数组第一个元素大小"<<sizeof(arr[0])<<endl; //
    cout<<"整个数组内存大小 "<<sizeof(arr)<<endl;
    cout<<"数组的元素个数："<<sizeof(arr)/sizeof(arr[0])<<endl;
    //可以通过数组名直接访问内存地址
    cout<<arr<<endl; //数组的首地址
    cout<<&arr[0]<<endl; //数组第一个元素的地址
    cout<<&arr[1]<<endl; //第二个元素的地址

    //数组案例：找大小
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

    //逆置
    int a[] = {1,3,2,5,4};
    //
    int length = sizeof(a)/sizeof(a[0]);
    int temp;
    for(int i =0; i<length/2; i++){
        temp = a[i];
        a[i] = a[length -1 -i];
        a[length -1 -i] = temp;
    }
    cout<<"逆置后：";
    for (int i=0;i<length; i++)
    cout<< a[i]<<' ';
    cout<<endl;
    //另一种实现
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
    cout<<"再次逆置后：";
    for(int i = 0;i<length;i++)
        cout<<a[i]<<' ';
    cout<<endl;

    //冒泡排序
    int b[] ={4,2,0,5,7,1,3,9,8};
    length = sizeof(b)/sizeof(b[0]);
    cout<<"排序之前";
    for (int i=0;i<length;++i)
        cout<<b[i]<<' '; cout<<endl;
    for(int i=0;i<length-1; i++)
        for(int j=0;j<length-1-i;j++)
            if(b[j]>b[j+1]){
                temp = b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
    cout<<"排序后";
    for (int i=0;i<length;++i)
    cout<<b[i]<<' ';cout<<endl;

    //二维数组
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
    cout<<""<<sizeof(aa)<<endl;
    cout<<""<<sizeof(aa[0])<<endl;
    cout<<""<<sizeof(aa[0][0])<<endl;
    cout<<""<<sizeof(aa)/sizeof(aa[0])<<endl;
    cout<<""<<sizeof(aa[0])/sizeof(aa[0][0])<<endl;
    cout<<""<<aa<<endl;
    cout<<""<<aa[1]<<endl;
    cout<<""<<&aa[1][0]<<endl;
    cout<<""<<&aa[1][1]<<endl;

    //
    int scores[][3] = {
            100, 100, 100,
            90, 50, 100,
            60,70,80
    };
    int lengthH = sizeof(scores)/sizeof(scores[0]);
    int lengthL = sizeof(scores[0])/sizeof(scores[0][0]);
    int sum;
    string name[] ={"张三","里斯","老虎胡"};
    for(int i =0; i<lengthH;i++) {
        sum =0;
        for (int j = 0; j < lengthL; j++)
            sum += scores[i][j];
        cout <<  name[i] << "的总成绩" << sum << endl;
    }
    return 0;
}
