#include <stdio.h>
#include <stdlib.h>
#include "pointers.h"
//ctrl+shift+c：可以快速注释掉选中的多行代码
//ctrl+shift+x：可以快速对已经注释的多行代码取消注释
//https://www.cnblogs.com/lulipro/p/7460206.html
/**
 指针知识基础，堆和栈
 @author:heshengjin
 @date:2019_07_09
 @email:2356899074@qq.com
**/

struct date {
    int month;
    int day;
    int year;
};

struct date2 {
    int month;
    int day;
    int year;
} today2 = {22,222,2222};

void getHeap(int **p){
     *p = malloc(sizeof(int)* 10);
}

int main()
{

    //============================分配和释放栈上？？==========================
    struct date today = {11,11,1111};
    //out-print=11
    printf("struct_test_001,console.log(month)=>%d\n",today.month);

    today2.month = 8888;
    //out-print=8888
    printf("struct_test_002,console.log(month)=>%d\n",today2.month);


    struct date *p = &today2;
    (*p).month = 9999;
    p->month = 9999;
    //out-print=9999
    printf("change0_struct_test_002,console.log(month)=>%d\n",(*p).month);
    //out-print=9999
    printf("change1_struct_test_002,console.log(month)=>%d\n",p->month);

    //指针的指针
    struct date **dd = &p;
    printf("指针的指针,地址%d\n",&dd);
    (**dd).month = 2019;
    //out-print=2019
    printf("change1_struct_test_2019,console.log(month)=>%d\n",(**dd).month);
    //out-print=2019
    printf("struct_test_002,console.log(month)=>%d\n",today2.month);

/**
  特殊的情况，他们并不一定需要使用&取地址：
  ①数组名的值就是这个数组的第一个元素的地址。
  ②函数名的值就是这个函数的地址。
  ③字符串字面值常量作为右值时，就是这个字符串对应的字符数组的名称,也就是这个字符串在内存中的地址。
**/
    int *pstr=(int*)&today2;
    //*pstr； //访问了ss 的成员a。
    //*(pstr+1); //访问了ss 的成员b。
    //*(pstr+2) //访问了ss 的成员c。
    //out-print=222
    printf("change_method2_struct_test_002,console.log(month)=>%d\n",*(pstr+1));




    int array[3]={35,56,37};
    int *pa=array;
    int *paaddr=&array;
    //通过指针pa 访问数组array 的三个单元的方法是：
   // *pa; //访问了第0 号单元
   // *(pa+1); //访问了第1 号单元
   // *(pa+2); //访问了第2 号单元
    //out-print=2686708-数组收割值得地址
    printf("array=>%d\n",array);
    //out-print=2686708-数组收割值得地址
    printf("array=>%d\n",&array);
    //out-print=37
    printf("array=>%d\n",*(pa+2));
    //out-print=35
    printf("array=>%d\n",*array);
    //out-print=35
    printf("array=>%d\n",*paaddr);
    //out-print=35
    printf("array=>%d\n",array[0]);

    int a = 100;
     //out-print=100
    printf("array=>%d\n",a);
     //out-print=2686704-地址
    printf("array=>%d\n",&a);


    //============================分配和释放堆上==========================
     int *d = NULL;
     //out-print=0028feec-随机地址
     printf("d = %p\n", &d);
     getHeap(&d);
     //out-print=4529712-堆地址第一个
     printf("d = %d\n", d);
     d[0] = 1;
     d[1] = 2;
     //out-print=1，2
     printf("d[0] =%d ,d[1] =%d ", d[0], d[1]);
     free(d);
     //out-print=0028feec-随机地址
     printf("d = %p\n", &d);

     //另外的头文件
     printf("**********************另外的头文件*****************************\n");
     pointersHSJTest();

    return 0;
}
