#include <stdio.h>
#include <stdlib.h>

//ctrl+shift+c�����Կ���ע�͵�ѡ�еĶ��д���
//ctrl+shift+x�����Կ��ٶ��Ѿ�ע�͵Ķ��д���ȡ��ע��

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

//    ���������͡�����������ͺ������ṹ�塢ö�ٲ�ͬ
    int *pstr=(int*)&today2;
    //*pstr�� //������ss �ĳ�Աa��
    //*(pstr+1); //������ss �ĳ�Աb��
    //*(pstr+2) //������ss �ĳ�Աc��
    printf("change_method2_struct_test_002,console.log(month)=>%d\n",*(pstr+1));




    int array[3]={35,56,37};
    int *pa=array;
    int *paaddr=&array;
    //ͨ��ָ��pa ��������array ��������Ԫ�ķ����ǣ�
   // *pa; //�����˵�0 �ŵ�Ԫ
   // *(pa+1); //�����˵�1 �ŵ�Ԫ
   // *(pa+2); //�����˵�2 �ŵ�Ԫ
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
