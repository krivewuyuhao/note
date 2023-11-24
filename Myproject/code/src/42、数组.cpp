/*
数组，就是一个集合，里面存放了相同类型的数据函数(不要与变量重名)

特点1:数组中每个数据元素都是相同的数据类型
特点2:数组是由连续的内存位置组成的

一维数组定义的三种方式：
数据类型 数据名 【数据长度】
数据类型 数组名 【数组长度】={值1 值2}
数据类型 数组名[]={  }

数组特点：放在一块连续的内存空间中，每个元素都是相同的数据类型
*/
#include<iostream>
using namespace std;
int main(){
//数据类型 数据名 【数据长度】
//赋值
//数组下标是从0开始索引的
int arr[5];
arr[0]=10;
arr[1]=20;
arr[2]=30;
arr[3]=40;
arr[4]=50;
//访问数据元素
cout<<arr[0]<<endl;
cout<<arr[1]<<endl;
cout<<arr[2]<<endl;
cout<<arr[3]<<endl;
cout<<arr[4]<<endl;

//数据类型 数组名 【数组长度】={值1 值2}
int arr2[5] = {10,20,30,40,50};    //如果在初始化数据时候，没有全部填写完，各元素默认值是0
// cout<<arr2[0]<<endl;
for(int i=0;i<5;i++)
{
    cout<<arr2[i]<<endl;
}

//数据类型 数组名 []={}
//定义数组的时候必须要有初始长度（会自动识别）
int arr3[]={1,2,3,4,5,6,7};
for(int i=0;i<7;i++)
{
    cout<<arr3[i]<<endl;
}











    system("pause");
    return 0 ;
}