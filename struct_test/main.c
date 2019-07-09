#include <stdio.h>
#include <stdlib.h>

//ctrl+shift+c�����Կ���ע�͵�ѡ�еĶ��д���
//ctrl+shift+x�����Կ��ٶ��Ѿ�ע�͵Ķ��д���ȡ��ע��
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

void getHeap(int **p){
     *p = malloc(sizeof(int)* 10);
}

int main()
{
    //============================������ͷ�ջ�ϣ���==========================
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

    //ָ���ָ��
    struct date **dd = &p;
    printf("ָ���ָ��,��ַ%d\n",&dd);
    (**dd).month = 2019;
    //out-print=2019
    printf("change1_struct_test_2019,console.log(month)=>%d\n",(**dd).month);
    //out-print=2019
    printf("struct_test_002,console.log(month)=>%d\n",today2.month);

/**
�������������ǲ���һ����Ҫʹ��&ȡ��ַ��
  ��������ֵ�����������ĵ�һ��Ԫ�صĵ�ַ��
  ��������ֵ������������ĵ�ַ��
  �ַ�������ֵ������Ϊ��ֵʱ����������ַ�����Ӧ���ַ����������,Ҳ��������ַ������ڴ��еĵ�ַ��
**/
    int *pstr=(int*)&today2;
    //*pstr�� //������ss �ĳ�Աa��
    //*(pstr+1); //������ss �ĳ�Աb��
    //*(pstr+2) //������ss �ĳ�Աc��
    //out-print=222
    printf("change_method2_struct_test_002,console.log(month)=>%d\n",*(pstr+1));




    int array[3]={35,56,37};
    int *pa=array;
    int *paaddr=&array;
    //ͨ��ָ��pa ��������array ��������Ԫ�ķ����ǣ�
   // *pa; //�����˵�0 �ŵ�Ԫ
   // *(pa+1); //�����˵�1 �ŵ�Ԫ
   // *(pa+2); //�����˵�2 �ŵ�Ԫ
    //out-print=2686708-�����ո�ֵ�õ�ַ
    printf("array=>%d\n",array);
    //out-print=2686708-�����ո�ֵ�õ�ַ
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
     //out-print=2686704-��ַ
    printf("array=>%d\n",&a);


    //============================������ͷŶ���==========================
     int *d = NULL;
     //out-print=0028feec-�����ַ
     printf("d = %p\n", &d);
     getHeap(&d);
     //out-print=4529712-�ѵ�ַ��һ��
     printf("d = %d\n", d);
     d[0] = 1;
     d[1] = 2;
     //out-print=1��2
     printf("d[0] =%d ,d[1] =%d ", d[0], d[1]);
     free(d);
     //out-print=0028feec-�����ַ
     printf("d = %p\n", &d);
    return 0;
}
