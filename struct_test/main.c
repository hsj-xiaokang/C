#include <stdio.h>
#include <stdlib.h>

//ctrl+shift+c：可以快速注释掉选中的多行代码
//ctrl+shift+x：可以快速对已经注释的多行代码取消注释

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
    printf("struct_test_001,console.log(month)=>%d\n",today.month);

    today2.month = 8888;
    printf("struct_test_002,console.log(month)=>%d\n",today2.month);


    struct date *p = &today2;
    (*p).month = 9999;
    p->month = 9999;
    printf("change0_struct_test_002,console.log(month)=>%d\n",(*p).month);
    printf("change1_struct_test_002,console.log(month)=>%d\n",p->month);

//    基本的类型、基本的数组和函数、结构体、枚举不同
    int *pstr=(int*)&today2;
    //*pstr； //访问了ss 的成员a。
    //*(pstr+1); //访问了ss 的成员b。
    //*(pstr+2) //访问了ss 的成员c。
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

    int a = 100;
    printf("array=>%d\n",a);
    printf("array=>%d\n",&a);


    return 0;
}
