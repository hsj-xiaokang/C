#include <stdio.h>
#include <stdlib.h>

//ctrl+shift+c：可以快速注释掉选中的多行代码
//ctrl+shift+x：可以快速对已经注释的多行代码取消注释
//https://www.cnblogs.com/lulipro/p/7460206.html


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

int main()
{
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

/**
特殊的情况，他们并不一定需要使用&取地址：
  数组名的值就是这个数组的第一个元素的地址。
  函数名的值就是这个函数的地址。
  字符串字面值常量作为右值时，就是这个字符串对应的字符数组的名称,也就是这个字符串在内存中的地址。
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
    printf("array=>%d\n",array);
    printf("array=>%d\n",&array);
    printf("array=>%d\n",*(pa+2));
    printf("array=>%d\n",*array);
    printf("array=>%d\n",*paaddr);
    printf("array=>%d\n",array[0]);

    int a = 100;
    printf("array=>%d\n",a);
    printf("array=>%d\n",&a);


    return 0;
}
